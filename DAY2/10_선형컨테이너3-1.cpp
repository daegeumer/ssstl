#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	auto p = std::remove(v.begin(), v.end(), 3);

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 10, 10

	v.erase(p, s.end()); // p ~ s.end() 제거..

	show(v); // 1,2,1,2,1,2,1

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 7, 10

	v.clear(); // 모두 제거

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 0, 10

	// 제거하려면 shirink_to_fit 또는 복사 생성자 사용
	v.shirink_to_fit();

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 0, 0

}



















//
