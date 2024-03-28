#include <iostream>
#include <string>
#include "show.h"

// STL string 은 "SSO" 알고리즘사용
// => Small String Optimization

// 16자 이하 : string 객체 내부에 문자열 보관
// 16자 이상 : 힙을 할당해서 문자열 보관

using dstring = std::basic_string<char, std::char_traits<char>, debug_alloc<char>>;

int main()
{
	for(int i = 0; i < 20; i++)
	{
		std::cout << i << std::endl;
		dstring s(i, 'A');
	}
}