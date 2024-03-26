// STL 컨테이너의 특징
#include <vector>
#include <iostream>
#include "show.h"

template<typename T, typename Ax = std::allocator<T> >
{
	Ax ax;
public:
	// STL 컨테이너에는 많은 멤버 타입이 있습니다.
	using iterator = vector_iterator;
	using value_type = T;
	using pointer = T*;
	using size_type = std::size_t;

	size_type size() const { return sz;}
};

int main()
{
	std::vector<int> v = { 1,2,3 };

	// #1. 멤버 타입이 있다.
	// => ? 자리에 최선의 코드를 적어 보세요(단, auto 사용하지 말고)

	// => vector 의 크기를 담는 타입은 vector 설계자가 정확히 알고 있다.
	//    vector 안에 멤버 타입으로 외부에 노출

	std::vector<int>::size_type sz = v.size();

    std::vector<int>::difference_type cnt = v.end() - v.begin();



	// #2. 반환과 제거를 동시에 하는 멤버 함수는 없다!
//	int n = v.pop_back();	// error. pop_back 은 제거만 하고반환 안함.

	int n = v.back(); // 반환만 하고, 제거 안함.
	v.pop_back();     // 제거만, 


	// 3. 단위 전략을 많이 사용한다.
	std::vector<int, debug_alloc<int>> v2; // ?
}
