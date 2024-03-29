#include <iostream>
#include <thread> 
#include <string>

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

	// 스레드를 생성한 경우 반드시
	// 1. 스레드 종료를 대기하거나
	// 2. 스레드를 떼어내야 합니다.
	t.join(); // 스레드 종료 대기
//	t.detach(); // 자식 스레드 분리


	// #2. 인자 전달
	std::thread t2(&f2, 3, 2.1);

	int n = 0;
	std::string s= "AA";

	std::thread t3(&f3, 1, std::ref(n), std::move(s) );

	t2.join();
	t3.join();

	// 멤버함수를 스레드로 수행하려면 객체도 같이 전달
	Test test;
	std::thread t4(&Test::goo, &test, 1, 3.4);

	t4.join();
}


