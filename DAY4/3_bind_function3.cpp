#include <iostream>
#include <functional>
using namespace std::placeholders;

void f1(int a)               { printf("f1 : %d\n", a); }
void f2(int a, int b)        { printf("f2 : %d, %d\n", a, b);}
void f3(int a, int b, int c) { printf("f3 : %d, %d, %d\n", a, b, c); }
void f4(int a, int b, int c, int d) { printf("f4 : %d, %d, %d, %d\n", a, b, c, d);}

class Dialog
{
public:
	void foo(int a) {}
	void goo(int a, int b) {}
};

int main()
{
	// std::function : 함수 포인터를 일반화한 클래스 템플릿
	// 사용법 : std::function<함수타입>
	
	// void(*)(int) : 함수 포인터 타입
	// void(int)    : 함수 타입

	std::function<void(int)> f;

	f = &f1; 
	f(10); // f1(10). 결국 f는 C언어의 함수 포인터와 동일하게 사용가능.

	//---------------------------------
	f = &f2; // error. f2는 인자가 2개인 함수

	// 하지만 std::bind 의 도움을 받으면 1개 함수를 만들수 있고
	// std::bind 반환 타입을 std::function 에 보관가능
	f = std::bind(&f2, _1, 3);
	f(10); // f2(10, 3)

	f = ?;
	f(7); // f4(8, 4, 7, 3);

}


