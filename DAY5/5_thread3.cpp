#include <iostream>
#include <thread>
#include <mutex>

// 스택 : 스레드당 한개
// 힙, data 메모리, 코드 메모리 : 프로세스당 한개(모든 스레드가 공유)

std::mutex m;
int shared_data = 10; // 파일같은 작업이라고 생각

void foo()
{
	int data = 0; // 스레드당 한개

	// 공유 자원 사용	
	m.lock();
	shared_data = 200;
	m.unlock();
}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}

