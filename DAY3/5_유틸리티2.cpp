#include <iostream> // 표준 입출력 스트림
#include <fstream>  // 화일 스트림
#include <sstream>  // 메모리(스트링)스트림
#include <string>

// C++에는 3개의 스트림이 있습니다
namespace std
{
	class ostream {};
	class ofstream {};
	class ostring_stream() {};

	ostream cout; // 미리 객체가 생성되어 있습니다.
}

int main()
{
	std::cout << "hello";

}
