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

	std::cout << hi(100) << std::endl;
	std::cout << hd(3.4) << std::endl;
	std::cout << hs("ABC") << std::endl;
	std::cout << hs("XYZ") << std::endl;
	std::cout << hs("abc") << std::endl;
}

