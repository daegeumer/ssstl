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
	std::vector<int> v2 = v1;

	std::cout << v2.size() << ", " << v2.capacity() << std::endl;

}

