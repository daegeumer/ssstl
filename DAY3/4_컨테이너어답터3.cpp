#include <stack>
#include <queue> // queue, priority_queue
#include "show.h"

int main()
{	
	// stack : 한방향으로 접근
	// queue : 양방향으로 접근. vector 는 앞쪽이 막혀있음.

	// 다음중 에러를 모두 골라 보세요
	std::stack<int, std::list<int>>   s1; // 1
	std::stack<int, std::vector<int>> s2; // 2
	std::stack<int, std::deque<int>>  s3; // 3

	std::queue<int, std::list<int>>   q1; // 4
	std::queue<int, std::vector<int>> q2; // 5. error. 단, 여기는 컴파일 됩니다
	std::queue<int, std::deque<int>>  q3; // 6

	q2.push(0); // ok
	q2.pop();   // error. 내부적으로 vector.pop_front() 호출
}



