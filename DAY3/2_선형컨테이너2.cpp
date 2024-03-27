
#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// 1. 생성
	std::vector<int> v1;
	std::vector<int> v2(10);	// 10 개를 0으로
	std::vector<int> v3(10, 3);	// 10 개를 3으로
	std::vector<int> v4(v3);	// v3와 동일

	std::vector<int> v5{ 10, 3 };// 주의! 2개를 10, 3 으로

	std::vector<int> v6 = { 1,2,3 };
	
	// 2. 삽입, 
	v1.push_back(0);
	v1.push_front(0); // 단, vector 는 안됨
//	v1.insert(위치를 나타내는 반복자, 0); // 반복자 앞에 0넣기

	// 3. 접근
	int n1 = v1.front();
	int n2 = v1.back();
	int n3 = v1[1]; // list 안됨
	int n4 = v1.at(1); // list 안됨.


	// 4. 요소 제거
	v1.pop_back(); // 끝에 제거
	v1.pop_front(); // 단, vector 는 안됨

	v1.erase(반복자A);			// 한개 제거
	v1.erase(반복자A, 반복자B);	// 구간 제거

	// 5. 요소 전부 교체
	v1.assign( v2.begin(), v2.end()); // v1 = v2 의 의미.
			// => 인자로 전달되는 반복자는 모든 컨테이너 가능
			// => 즉, vector 를 다른 컨테이너가 가진 요소로 변경할때 사용

}
