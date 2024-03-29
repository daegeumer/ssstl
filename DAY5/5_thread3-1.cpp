#include <iostream>
#include <thread>
#include <mutex>

template<typename T>
class lock_guard 
{
	T& mtx;
public:
	lock_guard(T& m) : mtx(m) { mtx.lock();}
	~lock_guard()             { mtx.unlock();}
};



std::mutex m;
int shared_data = 10; 

void foo()
{
	lock_guard<std::mutex> g(m); // 핵심

//	m.lock();
	shared_data = 200;
//	m.unlock();
}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}

