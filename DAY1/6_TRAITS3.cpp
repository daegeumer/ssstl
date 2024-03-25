#include <iostream>
#include <list>

// 아래 코드가 이미 C++ 표준에 있습니다.
template<typename T> struct iterator_traits 
{
	using value_type = T::value_type;
};


template<typename T> 
typename T::value_type sum( T first, T last)
{
//	typename T::value_type s = 0;

	typename iterator_traits<T>::value_type s = 0;



	while( first != last )
	{
		s += *first;
		++first;
	}
	return s;
}


int main()
{
//	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = sum( s.begin(), s.end() );

	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };


	int n = sum(x, x + 10); // ??

	std::cout << n << std::endl; // 55
}






