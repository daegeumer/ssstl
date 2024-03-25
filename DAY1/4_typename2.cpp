﻿#include <iostream>
#include <vector>
#include <list>

/*
void print_first_element(std::vector<int>& v)
{
	int n = v.front();
	std::cout << n << std::endl;
}
*/
/*
template<typename T>
void print_first_element(std::vector<T>& v)
{
	// 아래 ? 자리를 채워 보세요(auto 말고)
	T n = v.front();
	std::cout << n << std::endl;
}
*/

template<typename T>
void print_first_element(T& v)
{
	// 아래 ? 자리를 채워 보세요(auto 말고)
	// T : std::list<double>
	// ? : double
	? n = v.front();

	std::cout << n << std::endl;
}

int main()
{
//	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<double> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<double> v = { 1,2,3,4,5,6,7,8,9,10 };

	print_first_element(v);
}

// 모든 templpate 기반의 컨테이너는 "자신이 저장하는 요소의 타입" 이 있습니다.
// 그 타입을 외부에서 알고 싶을때가 있습니다.
// 위에 만든 print_first_element() 처럼
// 그래서 STL 이 아래처럼 설계 되었습니다.

template<typename T>
class list 
{
public:
	using value_type = T; // <=== 핵심
};

std::list<int> s = {1,2,3};
std::list<int>::value_type n = s.front(); // n의 타입은 ?