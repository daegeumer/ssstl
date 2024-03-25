#include <iostream>

// step 4. 보다 일반화(유연)되도록 - 약간 어렵습니다.

// 아래 처럼 템플릿을 만들면 2개의 단점이 있습니다.
// 1. 구간의 타입과 검색 요소의 타입이 연관됩니다.
// ==> double 배열에서 int 검색 안됩니다.

// 2. T* 라고 표기하면 구간은 항상 "raw pointer" 만 가능합니다.
// ==> 스마트 포인터등을 사용할수 없습니다.
// template<typename T>
// T* find(T* first, T* last, T c)

// 아래 처럼 만들면
// 1. 구간의 타입과 검색 요소의 타입이 분리되고
// 2. 구간은 반드시 "raw pointer" 일 필요가 없습니다
// => 단, 구간을 나타내는 타입은 ++, ==, !=, * 연산이 가능해야 합니다.
template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while ( first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
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
