#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <list>

template<typename C>
void show(const C& c)
{
	for( auto& e : c)
		std::cout << e << ", ";

	std::cout << std::endl;
}

// 반복자 버전
template<typename InputIter>
void show(InputIter first, InputIter last)
{
	std::ostream_iterator< 
			typename std::iterator_traits<InputIter>::value_type > p(std::cout, ", ");

	std::copy(first, last, p);

	std::cout << std::endl;
}


int main()
{
	std::list<int> s = {1,2,3,4,5,6,7,8,9,10};
	int x[10] = {1,2,3,4,5,6,7,8,9,10};

	// 컨테이너의 모든 내용 출력
	show(s);
	show(x);	

	// 반복자 버전
	show( s.begin(), s.end() );
	show( x, x+10 );
}
