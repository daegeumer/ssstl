#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	int x[5] = { 1, 2, 3, 4, 5 };
	int y[5] = { 0, 0, 0, 0, 0 };
	
	// #1. y의 모든 요소를 x 에 복사
	for(int i = 0; i < 5; i++)
		x[i] = y[i];

	std::list<int> s = { 0,0,0,0,0 };

	// #2. y의 모든 요소를 s 에 복사
//	for(int i = 0; i < 5; i++)
//		s[i] = y[i];	// error. list 는 [] 연산 안됩니다.

	// 반복자 사용
	auto first = s.begin();
	auto last = s.end();
	int i = 0;
	while( first != last )
	{
		*first = y[i++];
		++first;
	}

	i = 0;
	for( auto& e : s)
		e = y[i++];

	// 위와 같은 동작을 하는 알고리즘(함수)가 std::copy 입니다.
//	std::copy(y, y+5, s.begin());  // 앞으로 예제에서 널리 사용합니다.

	std::copy(std::begin(y), std::end(y), std::begin(s));
}
