#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <list>

int main()
{
	std::ifstream fin("1_stream5.cpp"); // 현재 파일 이름
	// 아래 반복자는 white space(공백, tab, backspace 등) 입력 안됩니다.
//	std::istream_iterator<char> p1(fin);
//	std::istream_iterator<char> p2;		// EOF

	// 아래 반복자는 white space 입니다.
	std::istreambuf_iterator<char> p1(fin);
	std::istreambuf_iterator<char> p2;		// EOF


	std::ostream_iterator<char> p3(std::cout, "");		

	std::copy(p1, p2, p3);
}
// 터미널에서  "chcp 65001" 입력하면 한글 제대로 출력됩니다.