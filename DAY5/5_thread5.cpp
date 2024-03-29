#include <iostream>
#include <thread>
#include <future>
#include <chrono>
using namespace std::literals;

// 스레드를 고려 하지 않은 함수
int add(int a, int b)
{
	int s = a + b;
	return s;
}
int main()
{
	// std::async : 스레드를 고려하지 않은 일반함수(결과를 반환값으로 알려주는)
	//				를 스레드로 수행하고 결과를 얻을때 사용

	std::future<int> ft = std::async(&add, 1, 2);

	int ret = ft.get();

	std::cout << ret << std::endl;


}
