#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	int x[5] = { 1, 2, 3, 4, 5 };
	int y[5] = { 0, 0, 0, 0, 0 };
	
	// #1. x의 모든 요소를 y 에 복사
	for(int i = 0; i < 5; i++)
		x[i] = y[i];

	std::list<int> s2 = { 0,0,0,0,0 };

	// #2. x의 모든 요소를 s 에 복사
}
