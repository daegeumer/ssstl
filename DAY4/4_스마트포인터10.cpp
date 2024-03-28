#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

//	std::shared_ptr<People> bf;  
//	People* bf; 	

	std::weak_ptr<People> bf; // 소유권이 없는 스마트 포인터
							  // 참조계수가 증가하지 않고
							  // 객체 파괴여부를 조사할수 있다.

};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2;
		sp2->bf = sp1;
	}

	if( sp1->bf.expired() )
	{
		std::cout << "객체 파괴됨\n";
	}
	else
	{
		
	}
}


