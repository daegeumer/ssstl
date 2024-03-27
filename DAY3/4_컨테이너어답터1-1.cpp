#include <iostream>
#include <list>
#include <vector>
#include <deque>

// 단위전략(Policy Base Design)

template<typename T, typename Container = std::deque<T> >
class stack 
{
	Container c;
public:
	void push(const T& a) { c.push_back(a);}
	void pop()            { c.pop_back();}
	T&   top()            { return c.back();}
};

#include <stack> // 이 안에 있는 stack 이 위처럼 되어 있습니다.
				 // 흔히 "stack adapter" 라고 부릅니다.

int main()
{
	stack<int, std::list<int> > s1;		// list 를 stack 처럼 사용하겠다는의미
	stack<int, std::vector<int> > s2;

	stack<int> s;
	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;

}
