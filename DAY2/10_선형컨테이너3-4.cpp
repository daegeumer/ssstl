#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1(10);
	v1.resize(4);
			
	// 핵심 : vector 의 복사 생성자에 대해서!!
	std::vector<int> v2 = v1; // v2는 v1의 size 크기만큼 메모리 할당

	std::cout << v2.size() << ", " << v2.capacity() << std::endl; // 4, 4

	// g++ 은 C++98 시절에는 shrink_to_fit()이 없었습니다. C++11 부터 제공
	// 그래서 예전에는 아래 처럼 했습니다 - 이해해 보세요!!

	std::vector<int> v3(10);
	v3.resize(4);

	// shrink_to_fit()없이 여분의 메모리 제거
	std::vector<int>(v3).swap(v3);

	std::cout << v3.capacity() ; // 4
}

