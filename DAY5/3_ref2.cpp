﻿#include <iostream>
#include <functional>

// 결국 reference_wrapper 는
// 1. 객체(변수)의 주소를 보관하고 있고
// 2. "raw reference" 로 암시적 변환이 가능한 도구 입니다.

// 즉, 객체의 주소를 보관하고 있다가 "reference" 로 반환해 줄수 있는 도구
// pointer => reference 로


// reference_wrapper 의 원리를 생각해 봅시다.
template<typename T>
class reference_wrapper
{
	T* obj;
public:
	reference_wrapper(T& r) : obj(&r) {}

	// 변환 연산자 : 객체가 다른 타입으로 변환이 필요 할때 호출되는 함수
	operator T&() { return *obj;}
};

int main()
{
	int n1 = 10;
	int n2 = 20;

	reference_wrapper<int> r1 = n1;  
	reference_wrapper<int> r2 = n2;

	r1 = r2;	

	int& r3 = r1; // r1.operator int&() 가 있으면 됩니다.
				  // 변환 연산자 함수

	std::cout << n1 << std::endl; 
	std::cout << n2 << std::endl; 
	std::cout << r1 << std::endl;  // std::cout << r1.operator int&()
	std::cout << r2 << std::endl; 
}

