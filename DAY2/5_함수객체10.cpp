// 5_함수객체10.cpp - 함수객체2 복사
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {1,2,6,4,3,5,7,9, 8,10};

	int k = 3; 

	// 주어진 구간에서 1번째 나오는 "k의 배수" 을 찾고 싶다.
    auto ret2 = std::find_if(v.begin(), v.end(), foo); 

}



