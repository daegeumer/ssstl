#include "show.h"
#include <queue> // queue 와 priority_queue

template<typename T>
class PQ : public std::priority_queue<T>
{
public:
	void print() const 
	{
		show(c); // 기반 클래스인 std::priority_queue<T> 가 가진 
				 // 컨테이너의 멤버이름이 "c" 입니다.
	}
};

int main()
{
	PQ<int> pq;

	pq.push(10); 
	pq.push(-10);
	pq.push(-20);
	pq.push(20);
	pq.push(15);
	pq.print();

}