#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <list>

int main()
{
	std::ifstream fin("1_stream5.cpp"); // 현재 파일 이름

	std::istream_iterator<char> p1(fin);
	std::istream_iterator<char> p2;		

	std::ostream_iterator<char> p3(std::cout, "");		

	std::copy(p1, p2, p3);
}
