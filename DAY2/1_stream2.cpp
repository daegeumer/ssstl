#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <list>

int main()
{
	std::list<int> s = { 1, 2, 3, 4, 5 };

	std::ostream_iterator<int> p1(std::cout, " ");

	// list 의 모든 요소를 화면 출력하는 코드
	std::copy(s.begin(), s.end(), p1);
}
