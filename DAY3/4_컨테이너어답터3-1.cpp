#include <vector>

template<typename T> 
class Queue 
{
	std::vector<T> v;
public:
	// vector 에는 pop_front() 없습니다.
	void pop() { v.pop_front(); }
};

int main()
{
	Queue<int> q;

	// 지연된 인스턴스화
	// => 클래스 템플릿의 멤버 함수는 "사용되는 것만 인스턴스화 됩니다."
	// => 따라서 아래 코드가 없다면 위 "Queue" 코드는 에러가 아닙니다.
	q.pop();
}