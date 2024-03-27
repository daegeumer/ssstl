#include <iostream>

// list 가 이미 있습니다
#include <list>
#include <vector>
#include <deque>

// 그런데, 스택이 필요합니다.
// 1. 새로 만들자.
// 2. list를 스택처럼 보이게 하자.

// 1. list 의 멤버 함수이름을 stack 처럼 보이게 하고
// 2. list 를 뒷쪽으로만 입/출력 할수 있게 하자

template<typename T>
class stack 
{
	std::list<T> c;
public:
	void push(const T& a) { c.push_back(a);}
	void pop()            { c.pop_back();}
	T&   top()            { return c.back();}
};


int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;

}
