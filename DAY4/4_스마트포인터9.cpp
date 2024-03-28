#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

//	std::shared_ptr<People> bf;  

	People* bf; 	// 참조계수가 증가하지 않지만
					// 가리키던 곳의 객체가 파괴되었는지 조사할수 없습니다.
					// dangling pointer 의 가능성이 있습니다.
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2.get();
		sp2->bf = sp1.get();
	}

	if( sp1->bf != 0 )
	{
		auto name = sp1->bf->name;
	}
}


