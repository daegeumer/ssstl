#include <iostream>
#include <thread> 

class Test
{
public:
	void goo(int n, double d)
	{
		std::cout << "goo" << std::endl;
	}
};

void f1() { }
void f2(int a, double d) { }
void f3(int a, int& b, std::string&& s) { b = 100; }

int main()
{
	// #1. thread 생성
//	f1();	// 주스레드가 호출!

	std::thread t(&f1); // 새로운 스레드를 생성해서 "f1 함수 실행"
						// => 별도의 "start" 같은 함수를 호출하는 것이 아니라
						// => 객체 생성만 하면 바로 스레드로 수행



	// #2. 인자 전달
}


