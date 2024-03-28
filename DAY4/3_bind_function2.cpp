#include <iostream>
#include <algorithm>
#include <functional>
using namespace std::placeholders;

// 4항 함수
void foo( int a, int b, int c, int d)
{
    printf("%d, %d, %d, %d\n", a, b, c, d);
}

int main()
{
    foo(1,2,3,4);   // 4항 함수

	// std::bind : 기존 함수(객체)의 특정 인자를 고정한 새로운 함수 만드는 도구
	//				M항 함수 => N 항 함수로 만들기( 단, M >= N)
	
	// 사용법 : std::bind(&M항함수, M개 인자)
	
	auto f1 = std::bind(&foo, 1, 2, _1, _2); // 4항함수 => 2항함수로 변경

	f1(10,3); // foo(1, 2, 10, 3)

	auto f2 = ?;
	f2(9, 4); // foo(4, 8, 6, 9) 나오도록 위의 ? 만들어 보세요
}

