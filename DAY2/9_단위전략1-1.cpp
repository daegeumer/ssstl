#include <iostream>
#include <mutex>

template<typename T, typename ThreadModel > class List
{	
	ThreadModel tm;
public:
	void push_front(const T& a)
	{
		tm.lock();
		// ..... 
		tm.unlock();
	}
};
// 동기화 정책 클래스
// => 규칙은 반드시 lock/unlock 이 있어야 한다.
class NoLock
{
public:
	inline void lock() {}
	inline void unlock() {}
};
class MutexLock 
{
	std::mutex m;
public:
	inline void lock()   { m.lock(); std::cout << "lock\n";}
	inline void unlock() { m.unlock(); std::cout << "unlock\n";}
};




List<int> st;	
int main()
{

	st.push_front(10);

}
