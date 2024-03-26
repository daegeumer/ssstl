#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
//	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int> v = { 1,2,3,1,2,3,1,2,3,1 };

/*
	auto p = std::remove(v.begin(), v.end(), 3);
	show(v);  
	v.erase(p, s.end());
*/
	// list 도 위코드는 에러가 없이 잘동작하지만 성능이 좋지 않습니다
	// 그래서 list 는 멤버 함수 remove 가 있습니다.
	v.remove(3);

	show(v);

}

// 핵심 : 알고리즘과 동일한 이름의 멤버 함수가 있다면
// => 멤버 함수를 사용해라!!

// 왜 알고리즘과 동일한 이름의 멤버함수를 제공하는가 ?

// 1. 컨테이너 반복자를 알고리즘에 보낼수 없을때
//    std::sort(list_iterator); // error

// 2. 컨테이너 반복자를 알고리즘에 보낼수 있지만 보다 최적화된 구현이 있을때
//   std::remove(list_iterator)
















