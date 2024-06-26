﻿#include "show.h"
#include <set>

struct Compare
{
	bool operator()(int a, int b) const
	{
		return (a / 10) < (b / 10);
	}
};
int main()
{
	std::set<int, Compare> s;
	
	// #1. 다음중 실패는 ?
	s.insert(15);
	s.insert(25);
	s.insert(45);
	s.insert(35);
	s.insert(22);  // 실패. 10의 자리가 2인 데이타(25)가 이미 있다.
	show(s);




	// #2. 아래 2개의 검색 결과는 어떻게 나올까요 ?
	// #2-1. equivalency 
	auto ret1 = s.find(12);  // 이진 검색
							 // => root 와 비교해서 왼쪽, 오른쪽 결정
							 // 즉, == 연산이 아닌 set에 전달한 함수 객체를 사용해서
							// 크지도 않고, 작지도 않으면 같다고 판단.
							// 따라서, "15" 를 찾게 됩니다.
	
	if (ret1 == s.end())
		std::cout << "실패" << std::endl;
	else 
		std::cout << *ret1 << std::endl;


	// #2-2. 아래 코드가 equality
	// 알고리즘 "std::find" 는 "==" 연산자로 검색!!
	auto ret2 = std::find(s.begin(), s.end(), 12);  // 실패

	if (ret2 == s.end())
		std::cout << "실패" << std::endl;
	else 
		std::cout << *ret2 << std::endl;
	

}
