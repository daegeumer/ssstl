#include <iostream>
#include <list>
#include <vector>

int main()
{
	// 컨테이너(container) : 여러개의 요소를 보관하는 자료구조
	std::vector<int> v = {1,2,3,4,5}; // 모든 요소가 연속된 메모리에
	std::list<int> s = {1,2,3,4,5}; // 모든 요소가 떨어진 메모리에

	// C++17 부터 타입생략가능합니다.
	std::vector v2 = {1,2,3,4,5};
	std::vector v3{1,2,3,4,5};
}
