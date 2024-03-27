#include "show.h"
#include <stack>
#include <vector>
#include <list>

int main()
{
	std::vector<int, debug_alloc<int>> v;

	std::stack<int> s;

	s.push(0); // 이순간 메모리 할당 정보를 볼수 있도록
				// 위 코드에 allocator 를 변경해 보세요, debug_alloc 으로
				// 1-1.cpp 코드를 잘보고 생각해보세요
}