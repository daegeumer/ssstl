#include <iostream>
#include <list>   
#include <vector>

int main()
{
//	std::list<int> s = { 1,2,3,4,5 };
//	std::vector<int> s = { 1,2,3,4,5 };
	int s[] = { 1,2,3,4,5 };

	// 반복자를 꺼내는 법
	// #1. C++98 스타일
	// => 단점 : 아래처럼 사용하면 컨테이너 변경시 아래 코드도 변경됩니다.
	// std::list<int>::iterator p = s.begin();

	// #2. auto를 권장합니다.
//	auto p = s.begin();  // s가 배열인 경우 error

    // #3. 멤버가 아닌 일반함수 std::begin() 이 좀더 유연성이 있습니다.
//	auto p = std::begin(s); // s가 배열이라도 ok. 

    // #4. C++20 부터 새로운 begin 등장
	auto p = std::ranges::begin(s); // 가장 안전한 코드

	auto p1 = std::begin( std::list{1,2,3}); // ok
	auto p1 = std::ranges::begin( std::list{1,2,3}); // error
}



