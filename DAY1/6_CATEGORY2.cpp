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
	std::forward_list<int> s1 = { 1,2,3 };
	std::list<int> s2 = { 1,2,3 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// find 는 1, 2번째 인자가 반복자 입니다
	// => 최소 요구 조건을 위의 5가지에서 선택해 보세요
	// => "입력 반복자"
	auto p = std::find(v.begin(), v.end(), 5);

	std::reverse(v.begin(), v.end()); // 1, 2번째 인자의 최소 요구 조건은 ?
									 // => 양방향 반복자(bidirectional)

//	std::reverse(s1.begin(), s1.end()); // error
	std::reverse(s2.begin(), s2.end()); // ok

	std::sort(v.begin(), v.end()); // 퀵소트(하이브리드) 알고리즘 입니다.
								// => random access iterator

//	std::sort(s2.begin(), s2.end()); // error. 양방향 반복자!!

	s2.sort(); // ok.  퀵이 아닌 다른 구현
				// 즉, list 는 std::sort()에 보낼수 없지만
				// 멤버 함수 sort() 제공

	std::vector<int> v2 = {1,2,3};
	v2.sort(); // 이 멤버 함수가 있을까요 ??
			   // => 없다. sort 하고 싶다면 std::sort() 사용하면 된다.
			   // => vector 의 반복자는 random access iterator(continuos)
			   //    따라서, 모든 알고리즘(일반 함수) 사용가능하다.!
}
