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

	v.push_back(0); // 끝에 0 추가
					// size < capacity 이므로 메모리 재할당 없음.
					// not expensive!!

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 8, 10

	v.shrink_to_fit();  // 필요없는 여분의 메모리 제거
						// 8개 메모리 재할당해서, 기존 버퍼에서 8개 복사
						// 기존 버퍼는 제거

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 8, 8

	v.push_back(0);  // size == capacity 상태이므로 메모리 재할당 필요
					// expensive 연산!!

	std::cout << v.size() << ", " << v.capacity() << std::endl;	// 9, ?				
}




