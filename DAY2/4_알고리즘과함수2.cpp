#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10 };
    std::list<int> s3;

    // transform 알고리즘
	std::transform( s1.begin(), s1.end(), // 1. 이 구간의 내용을
					s2.begin(),			  // 2. 이 구간의 내용과 함께
					s3.begin(),           // 4. 함수 결과를 이곳에 넣어라
					foo);				  // 3. 이 함수에 보내서

	// 주석을 보고, foo 가 단항인지 이항인지 생각해보세요
}



















//
