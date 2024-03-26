// 3_알고리즘과정책변경
#include <iostream>
#include <vector>
#include <algorithm>  // 정렬, 검색등의 알고리즘
#include <numeric>    // 수치 관련 연산(합, 부분합, 내적... )
#include <functional>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

//	std::sort(v1.begin(), v1.end()); // <algorithm>

	// #1. numeric 에는 다양한 수학 관련 알고리즘
	int n = std::accumuate(v1.begin(), v1.end(), 0);

	std::cout << n << std::endl;
}
