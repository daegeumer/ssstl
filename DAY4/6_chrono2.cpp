#include <iostream>
#include <chrono>

// duration 정의 : 특정 단위의 갯수(tick count)를 표현하는 자료구조
//				  값 한개와, 단위를 관리
//				  10초 => 1초의 10개
//			      10분 => 1분의 10개		   

int main()
{
	// duration 사용
	// 1. duration 은 "값 한개"만 보관합니다.
	// 2. 그런데, 템플릿 인자로 단위도 전달 합니다.
	std::chrono::duration<int, std::ratio<1, 100>>  d1(2); 
	std::chrono::duration<int, std::ratio<1, 1000>> d2(d1);

	std::cout << d2.count() << std::endl; // 20

	std::chrono::duration<int, std::ratio<1, 50000>> d3(d1); 

	std::cout << d3.count() << std::endl; // ?

	// d1, d2, d3 는 모두 다른 타입입니다.
	// 즉, duration 사용시, 단위가 다르면 다른 타입 입니다.
}
