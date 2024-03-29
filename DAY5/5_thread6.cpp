#include <iostream>
#include <thread>
#include <atomic>

constexpr std::size_t cnt = 1'000'000;
// atomic

//int x = 0;

std::atomic<int> x = 0; // ++, + 등을 연산자 재정의했고
						// atomic_fetch_add() 등의 함수 로 구현.

void foo()
{
	for ( int i = 0; i < cnt; i++)
	{
		//x = x + 1;
		++x;

		// 1. 위한줄은 아래 3줄이므로 thread safe 하지 않습니다.
//		mov eax, x
//		add eax, 1 
//		mov x, eax 

		// 2. mutex 를 사용하면 안전합니다.
		// => 하지만 +1 때문에 mutex 를 사용하는 것은 성능 저하가 너무 큽니다.
		/*
		m.lock();
		x = x+ 1;
		m.unlock();
		*/

		// 3. CPU 가 제공하는 멀티 코어에 안전하게 1증가한느 함수가 있습니다.
		// => lock-free 기술
		// => 정말 lock 이 없는 것이 아니라 "OS lock"이 아닌 "cpu lock"을 사용
//		lock inc x;	// 어셈 코드
//		atomic_fetch_and_add(&x); // 위 어셈을 수행하는 C 함수



	}
}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);
	std::thread t3(&foo);
	t1.join();
	t2.join();
	t3.join();
	std::cout << x << std::endl;
}
