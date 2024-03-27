#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// 예전에 만들어 놓은 함수
// => 배열의 시작주소와 갯수를 받고 있는 C언어 시절에 만들어둔 함수.
void foo(int* arr, int sz) {}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	foo(x, 10);

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// foo 에 v를 보내 보세요.
//	foo(v, v.size()); // error
//	foo(&v, v.size()); // error
	foo(&v[0], v.size()); // ok. C++98 시절 사용하던 방법
	foo(v.data(), v.size());  // ok. C++11 이후.

//	foo(v.begin(), v.size());  // error. 반복자는 포인터 역활의 객체 입니다.
	
}


