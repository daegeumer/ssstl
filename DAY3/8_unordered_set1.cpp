#include <iostream>
#include <unordered_set>
#include "show.h"

// hash 함수

int main()
{	
	// C++ 표준 해쉬 함수는 함수 객체(템플릿) 입니다.
	std::hash<int> hi;
	std::hash<double> hd;
	std::hash<std::string> hs;

	std::cout << hi(100) << ", " << hi(100) % 13 << std::endl;
	std::cout << hd(3.4) << ", " <<hd(3.4) % 13 << std::endl;
	std::cout << hs("ABC") << ", " <<hs("ABC") % 13 << std::endl;
	std::cout << hs("XYZ") << ", " <<hs("XYZ") % 13 << std::endl;
	std::cout << hs("abc") << ", " <<hs("abx") % 13 << std::endl;
}

