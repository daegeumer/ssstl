// ALGORITHM5.cpp  복사해오세요 - 주석 제거
#include <iostream>

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

	double* p = find(x, x+10, 5);


}
