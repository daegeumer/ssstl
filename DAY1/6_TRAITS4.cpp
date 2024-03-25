#include <list>
#include <vector>
#include <iostream>

template<typename C> 
void container_element_type(C& c)
{
	// C : std::vector<int>
	// C가 저장하는 타입을 알고 싶다면
	typename C::value_type n;

	std::cout << typeid(n).name() << std::endl;
}

// iterator 는 크기가 작은 타입입니다 "call by value" 가 관례 입니다.
template<typename IT> 
void iterator_element_type(IT it)
{
	// iterator 가 가리키는 타입을 알고 싶다면
//	typename IT::value_type n1;	// 단, 이코드는 IT 가 raw pointer 라면 에러

	// 아래 처럼하면 IT가 raw pointer 라도 문제 없음.
	typename std::iterator_traits<IT>::value_type n1;

	std::cout << typeid(n1).name() << std::endl;
}
int main()
{
	std::vector<int> v = {1,2,3};
	container_element_type(v);
	iterator_element_type(v.begin());
}