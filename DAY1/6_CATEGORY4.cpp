// ALGORITHM5.cpp  복사해오세요 - 주석 제거
#include <iostream>
// template 인자의 이름을 통해서
// 알고리즘이 요구하는 "반복자 category" 를 알려주는 것이 관례 입니다.

// cppreference.com 에서 std::find 검색

template<typename InputIter, typename T>
InputIter find(InputIter first, InputIter last, const T& c)
{
	while ( first != last && *first != c)
		++first;

	return first;
}
int main()
{
	double x[10] = {1,2,3,4,5,6,7,8,9,10};

	double* p = find(x, x+10, 5);


}
