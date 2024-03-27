#include <iostream>
#include "show.h"

#include <set> 

int main()
{
	std::set<int> s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);

	// #1. 중복 허용 안함, 반환값
//	std::pair<std::set<int>::iterator, bool> ret = s.insert(15); // 실패
	auto ret = s.insert(15); 

	if ( ret.second == false )
		std::cout << "실패, 요소가 이미 존재\n";




	// #2. 요소 삽입은 insert(또는 emplace) 만 가능
//	s.push_back(50); // error


	// #3. 반복자는 읽기만 가능
	auto p = s.begin();
//	*p = 20;	// error
	

	// #4. 검색
	// => 아래 코드는 에러가 아닙니다.
	// => 그런데, 성능이 좋지 않습니다.
	// => std::find 는 선형검색, set 을 사용하는 것은 이진 검색을 위해서
	auto ret1 = std::find(s.begin(), s.end(), 30); // bad

	auto ret2 = s.find(30); // good
							// 알고리즘 보다 멤버 함수를 우선 사용해라!


	// #5. 값이 있는지 조사
	
}







