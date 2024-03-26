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

template<typename T>
class debug_alloc
{
public:
	T* allocate( std::size_t sz) 
	{
		void* p = malloc(sizeof(T) * sz);
		printf("allocate : %p %d cnt\n", p, sz);
		return static_cast<T*>(p);
	}
	void deallocate(T* p, std::size_t sz)
	{
		printf("deallocate : %p %d cnt\n", p, sz);
		free(p);
	}

	using value_type = T;
	debug_alloc() {} 

	template<typename U>
	debug_alloc( const debug_alloc<U>& ) {} 
};

// ==, != 도 필요 합니다
// => 현재 debug_alloc 은 상태(멤버 데이타)가 없으므로
//   아래처럼만 만들면 됩니다.
template<typename T>
bool operator==(const debug_alloc<T>& a1, const debug_alloc<T>& a2)
{
	return true;
}
template<typename T>
bool operator!=(const debug_alloc<T>& a1, const debug_alloc<T>& a2)
{
	return false;
}