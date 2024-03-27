// policy base design

// set3.cpp - set1.cpp 복사 하세요
#include <iostream>
#include "show.h"
#include <set> 

/*
// set 의 템플릿 인자를 잘 보세요
template<typename T, 				  // 저장할 타입
		 typename Pr = std::less<T>,  // 요소 비교에 사용할 함수객체
		 typename Ax = std::allocator<T>>
class set 
{
	Ax ax;  // 메모리 할당기
	Pr cmp; // 요소 비교를 위한 함수 객체
public:
	void insert( const T& e) 
	{
		if ( cmp(root, e) )
			add right_child;

		else if ( cmp(e, root) )
			add left_child

		else
			return 실패;  // pair 타입으로.. 
	}
};
*/

int main()
{
//	std::set<int> s;
	std::set<int, std::greater<int> > s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(17);
	s.insert(25);

	auto first = s.begin();
	auto last  = s.end();   

	while (first != last)
	{
		std::cout << *first << std::endl;
		++first;
	}
	
}
