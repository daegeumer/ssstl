#include <iostream>
#include <thread>
#include <future>
#include <chrono>
using namespace std::literals;

// 스레드를 고려 하지 않은 함수
int add(int a, int b)
{
	int s = a + b;

	std::cout << std::this_thread::get_id() << std::endl;

	return s;
}
int main()
{
	// std::async : 스레드를 고려하지 않은 일반함수(결과를 반환값으로 알려주는)
	//				를 스레드로 수행하고 결과를 얻을때 사용

	std::future<int> ft = std::async(&add, 1, 2);
	std::future<int> ft1 = std::async(&add, 1, 2);
	std::future<int> ft2 = std::async(&add, 1, 2);

	std::future_status s = ft.wait_for(2s);

	if ( s == future_status::timeout)
	{
	
	} else if ( s == future_status::ready )
	{
		int ret = ft.get();
		std::cout << ret << std::endl;
	}


}

// std::async    : 내부적으로 아래 2개를 사용해서 만들어진 편의 함수
//			       => 단, 대부분의 컴파일러에서 구현시
//				   => 스레드 풀링 기술로 구현해서, 성능도 좋습니다.

// std::promise  : 스레드간 결과를 꺼내는 도구
// std::thread 	 : C++에서 스레드를 생성하는 유일한 방법