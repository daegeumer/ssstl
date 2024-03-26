#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"
// 선형컨테이너3.cpp

// capacity 개념
int main()
{
	std::vector<int> v(10, 0);

	v.resize(7); // 어떻게 구현했을까요 ?

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 7, 10

	
}




