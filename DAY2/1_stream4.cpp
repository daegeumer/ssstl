#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <list>

int main()
{
	std::ifstream fin("1_stream4.cpp"); // 현재 파일 이름

	std::istream_iterator<char> p1(fin);
	std::istream_iterator<char> p2;		// 디폴트생성자로 만들면 EOF 의미

	std::cout << *p1 << std::endl;
	std::cout << *p1 << std::endl;


}
