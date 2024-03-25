#include <iostream>
#include <algorithm> // 이 안에 std::find 가 있습니다
					 // 아래 코드와 "거의동일한 구현" 입니다.
// find 정리
// 하는일 : [first, last) 구간에서 선형 검색 수행

// 구간의 표현 : 반드시 포인터일 필요는 없다.
// 구간의 이동 : 전위형 ++ 연산자
// 검색 실패시 : last 반환

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while ( first != last && *first != c)
		++first;

	return first; 
}

int main()
{
	double x[10] = {1,2,3,4,5,6,7,8,9,10};

	double* p1 = find(x, x+10, 5);
	double* p2 = std::find(x, x+10, 5);

}
