#include <iostream>
#include <functional>

void foo(int& a) { a = 200; }

int main()
{
	std::function<void()> f;

	int n = 10;

//	f = &foo; // error. foo 는 인자 한개를 요구합니다.
	
//	f = std::bind(&foo, n);	// 이순간 foo 의 인자를
							// 1. n 으로 고정할까요 ?
							// 2. n의 값 10 으로 고정할까요 ?
							//=> std::bind 는 기본 적으로 "값 보관"

	f = std::bind(&foo, std::ref(n) ); // 이렇게 하면 reference로 보관
									// 정확한 원리는
									// 포인터로 보관하다가 참조로 변환가능한것

	f();	

	std::cout << n << std::endl; 
}
