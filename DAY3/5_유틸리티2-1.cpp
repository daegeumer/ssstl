#include <iostream> // 표준 입출력 스트림
#include <fstream>  // 화일 스트림
#include <sstream>  // 메모리(스트링)스트림
#include <string>

int main()
{
	double d = 3.1415;

	// "d = 3.1415" 라는 문자열을 만들어 보세요
	// C언어
	char s[32];
	sprintf(s, "d = %lf", d); // 버퍼 overflow 발생 할수 있습니다.
	snprintf(s, 32, "d = %lf", d); // 데이타 손실 가능성

	// C++ 
	std::ostringstream oss;
	oss << "d = " << d;

	std::string ss = oss.str();

}
