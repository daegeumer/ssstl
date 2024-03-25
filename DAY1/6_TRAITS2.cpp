#include <iostream>
#include <list>

// 반복자의 형태별 분류
// 1. 1일차 오전에 만든 slist_iterator 처럼, 클래스 문법으로 만들어진 반복자
// 2. raw pointer 도 반복자!!

// 위 2개의 차이 때문에 아래 sum() 같은 함수를 만들기 어렵습니다.
// => 이 문제의 해결책이 std::iterator_traits
// => 구현은 다음 소스에서.


template<typename T> 
typename T::value_type sum( T first, T last)
{
	typename T::value_type s = 0;

	while( first != last )
	{
		s += *first;
		++first;
	}
	return s;
}


int main()
{
//	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = sum( s.begin(), s.end() );

	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// "raw pointer" 도 반복자입니다.
	// 따라서, 아래 처럼 사용가능해야 합니다.
	int n = sum(x, x + 10); // ??

	std::cout << n << std::endl; // 55
}






