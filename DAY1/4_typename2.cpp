#include <iostream>
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
