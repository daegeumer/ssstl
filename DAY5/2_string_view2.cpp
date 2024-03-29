#include <iostream>
#include <string>
#include <string_view>

//void bad(std::string s) { } // call by value : 복사본의 오버헤드 있습니다.
void good(const std::string& s) {}



void best(std::string_view   s) {}






int main()
{
	std::string s = "to be or not to be";

	// 아래 경우는 비슷합니다.
//	good(s);
//	best(s);

	// 아래 경우에서 차이점이 많습니다.
	good("to be or not to be");
	best("to be or not to be");

}
