#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 핵심 : 알고리즘은 컨테이너를 알지 못한다.

// std::remove : 조건을 만족하는 요소를 찾으면 실제 메모리 제거가 아닌
//				뒤의 요소를 앞으로 이동해 놓게 됩니다.
//				또한, 컨테이너 자체의 크기도 줄이지 않습니다.
//				반환 값으로 유효하지 않은 구간의 시작을 나타내는 반복자 반환

// 알고리즘은 "컨테이너를 알수 없기때문에" 메모리를 줄일수는 없습니다.

// 크기나, 메모리를 제거하려면 "멤버 함수로" 해야 합니다.

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	auto p = std::remove(v.begin(), v.end(), 3);

	show(v);  


	return 0;
}



















//
