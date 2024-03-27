#include <iostream> // 표준 입출력 스트림
#include <fstream>  // 화일 스트림
#include <sstream>  // 메모리(스트링)스트림
#include <string>

// C++에는 3개의 스트림이 있습니다
/*
namespace std
{
	class ostream {};	// 표준 출력 스트림
	class ofstream {};  // 화일 출력
	class ostringstream() {}; // 메모리(string)에 출력

	ostream cout; // 미리 객체가 생성되어 있습니다.
}
*/
int main()
{
	std::ofstream fout("a.txt");
	std::ostringstream oss;

	std::cout << "hello";
	     fout << "hello";	// a.txt에 출력
		 oss  << "hello";   // oss 가 내부적으로 가진 버퍼(string)에 출력

	// oss 가 가진 문자열 꺼내기
	std::string s = oss.str();

	std::cout << s << std::endl; // hello
}
