#include <iostream>
#include <thread>
#include <future>
#include <chrono>
#include <future>
using namespace std::literals;

// 방법 #2. promise & future

// 1. 스레드 함수는 인자로 promise 참조를 받아야 합니다.
void add(int a, int b, std::promise<int>& p)
{
	int s = a + b;

	// 연산이 종료되면 promise 객체를 통해서 주스레드에 알려 줍니다.
	p.set_value(s); 	// 이순간 대기중인 주스레드가 깨어나게 됩니다.

	std::this_thread::sleep_for(2s);
}


int main()
{
	// 스레드 생성시
	// 1. promise 를 만들고
	// 2. promise 안에서 있는 미래의 결과를 담은 future 를 꺼냅니다.
	std::promise<int> p;

	std::future<int> ft = p.get_future();


	// 3. 스레드 생성시 promise 의 참조를 인자로 전달
	std::thread t(&add, 1, 2, std::ref(p) );

	std::cout << "다른 작업을 하다가...\n";


	// 4. 결과가 필요하면 future 를 통해서 꺼내면 됩니다.
	int ret = ft.get(); // 결과가 나올때 까지 대기

	std::cout << "결과 : " << ret << std::endl;



	t.join();

	std::cout << ret << std::endl;


}
