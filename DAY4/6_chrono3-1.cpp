// 6_chrono3-1.cpp
#include <iostream>
#include <chrono>
#include <thread>
using namespace std::literals;

int main()
{
	std::cout << "======\n";

	// 현재스레드를 특정시간동안 재우는 함수는 "std::this_thread::sleep_for"
	// 입니다. 3초간 재워 보세요.
//	std::this_thread::sleep_for(3); // error

	std::this_thread::sleep_for( std::chrono::seconds(3) ); // ok
	std::this_thread::sleep_for( 3s ); // ok

	std::cout << "======\n";
}





