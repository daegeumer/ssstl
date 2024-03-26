#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

// 단항함수(unary function) : 인자가 1개인 함수
// 이항함수(binary function) : 인자가 2개인 함수

// for_each 의 3번째 인자는 단항함수 이어야 합니다.
void foo(int n)
{
	std::cout << n << ", ";
}

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	
	// STL 은 많은 알고리즘이 인자로 함수를 받고 있습니다.
    // for_each 알고리즘
    std::for_each(v.begin(), v.end(), foo);


	return 0;
}



















//
