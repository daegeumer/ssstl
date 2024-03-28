#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

	std::shared_ptr<People> bf;  // "best friend"
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	// 스마트포인터를 아래처럼 사용하면 자원 누수가 발생합니다.
	// => 상호 참조, 원형 참조라고 합니다.(cycle reference)
	sp1->bf = sp2;
	sp2->bf = sp1;
}


