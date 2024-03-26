//show.h
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