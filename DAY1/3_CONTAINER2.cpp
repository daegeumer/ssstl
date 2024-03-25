#include <iostream>

// 31 page 그림 참고
// 싱글 linked list  만들기.

template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

// slist 안에 있는 요소를 가리키는 포인터 역활의 객체를 만들어 봅시다

template<typename T>
class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator( Node<T>* p = nullptr ) : current(p)  {}
	
};





template<typename T> class slist
{
	Node<T>* head = 0;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}
};

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);
}
