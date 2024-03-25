#include <iostream>
#include <iterator>
#include <list>

int main()
{
	int n = 10;

	std::cout << n << std::endl;

	// 출력 스트림 반복자
	std::ostream_iterator<int> p(std::cout, " ");

	*p = 10;
	*p = 20;



}
