#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2;

	// v1에서 3을 0으로 변경하는 코드입니다
//	std::replace(v1.begin(), v1.end(), 3, 0);

	// 위 코드 참고해서 v1에서 짝수를 0으로 변경한 결과를 v2 에 담아 보세요

	std::replace_copy_if(v1.begin(), v1.end(), 
						std::back_inserter(v2), 
						 [](int n) { return n % 2 == 0;}, 0);

	show(v2); // 1, 0, 3, 0, 5, 0, 7, 8, 9, 0  나와야 합니다
}

// cppreference.com 에서 1번째 화면. 오른쪽 위쪽에 "Algorithm library"