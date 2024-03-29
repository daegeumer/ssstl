#include <iostream>
#include <functional>

int main()
{
	int n1 = 10;
	int n2 = 20;

//	int& r1 = n1;  
//	int& r2 = n2;

	// STL 의 "이동 가능한 참조" - C++11
	std::reference_wrapper<int> r1 = n1;  
	std::reference_wrapper<int> r2 = n2;

	r1 = r2;	// 이순간의 동작 방식을 생각해 보세요
				// 1. C++ 언어의 참조 : 값이 이동. 참조(자체)는 상수이다.
				// 2. std::reference_wrapper : 참조 이동

	// 결과 예측해 보세요			// C++참조   reference_wrapper
	std::cout << n1 << std::endl; // 20			10
	std::cout << n2 << std::endl; // 20			20
	std::cout << r1 << std::endl; // 20			20
	std::cout << r2 << std::endl; // 20			20
}

