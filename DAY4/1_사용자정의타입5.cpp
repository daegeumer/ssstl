#include <iostream>
#include <set>
#include "show.h"

struct People
{
	std::string name;
	int  age;

	People(const std::string& n, int a) : name(n), age(a) {}
};

// set 에 2번째 템플릿 인자로 전달되려면
// People 객체 2개를 비교할수 있는 함수 객체이어야 합니다.

struct PeopleCompare
{
	bool operator()(const People& p1, const People& p2) const 
	{
		return p1.age < p2.age;
	}
};


int main()
{
	// #1. std::set 에 보관되는 타입은 반드시 크기 비교가 가능해야 합니다.

//	std::set<People> s; // error. 이 코드는 결국 아래 코드 입니다
//  std::set<People, std::less<People>, std::allocator<People>> s;	
//  => 즉, 요소의 비교를 위해서 "std::less<People>" 을 사용한다는 의미
//  => std::less 는 "<" 로 비교 하고 있습니다.
//  => 해결책은 "비교함수객체" 를 변경

	std::set<People, PeopleCompare> s;


	s.emplace("kim", 20); // s.insert( People("kim",20))
	s.emplace("lee", 25);
	s.emplace("park", 30);

	People peo("lee", 25);
	auto p = s.find( peo );

	std::cout << (*p).name << std::endl;
}

