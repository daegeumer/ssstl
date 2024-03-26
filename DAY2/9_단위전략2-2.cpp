#include <vector>
#include <iostream>

// 사용자 정의 메모리 할당기
// => 반드시 템플릿으로 해야하는 것은 아니지만, 
// => 다양한 타입의 메모리 할당이 필요하므로 관례상 템플릿으로

template<typename T>
class debug_alloc
{


};


int main()
{
//	std::vector<int> v(5); // std::vector<int, std::allocator<int>> v(5)

	std::vector<int, debug_alloc<int> > v(5);

	v.resize(10);
}


