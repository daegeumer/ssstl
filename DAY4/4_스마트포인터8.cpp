#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

//	std::shared_ptr<People> bf;  

	People* bf; // raw pointer 는 shared_ptr 의
				// 참조계수에는 아무런 영향을 주지 않습니다.
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	sp1->bf = sp2.get();
	sp2->bf = sp1.get();
	// 이코드는 자원은 안전하게 파괴됩니다.
	// 그런데, 문제가 있습니다. - 스마트포인터9.cpp 참고
}


