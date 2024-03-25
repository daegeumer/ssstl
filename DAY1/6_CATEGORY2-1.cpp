#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

// 교재 53 page -  표 참고

// 입력     : =*p, ++
// 출력     : *p=, ++

// == 위 2개는 멀티 패스 보장 안됨
// == 아래4개는 멀티 패스 보장

// 전진형   : =*p, ++		싱글리스트 반복자
// 양방향   : =*p, ++, -- 	더블리스트 반복자
// 임의접근 : =*p, ++, --, +, -, []		vector 의 반복자.
//										연속된 메모리와 유사한 컨테이너

// continuous iterator (C++17) : 연속된 메모리에 대한 반복자

int main()
{
	std::list<int> s2 = { 1,2,3 };

	auto p1 = s2.begin();
	auto p2 = s2.cbegin(); // const iterator. 쓰기 안됨

	*p1 = 10; // ok      mutable iterator
	*p2 = 20; // error.  immutable iterator

	// 양방향 반복자 : 읽기, ++, -- 가 가능한 반복자
	//				  쓰기는 요구조건은 아닙니다.
	//				 될수도 있고 안될수 도 있습니다.
}
