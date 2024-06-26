#include <iostream>

// step 5. 검색실패시 반환값
// => 0 대신 last 반환
// 장점 1. 활용도가 좋고, 부분 검색 실패시, last 는 다음 구간의 시작
// 장점 2. find 만들기가 쉬워지고 빨라진다.
template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while ( first != last && *first != c)
		++first;

	return first; // == last ? nullptr : first;
}

int main()
{
	double x[10] = {1,2,3,4,5,6,7,8,9,10};

	double* p = find(x, x+10, 5);

	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}
