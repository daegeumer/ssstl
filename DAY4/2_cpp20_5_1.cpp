#include <string>
#include <algorithm>
#include <functional>

int main()
{
	std::string s1 = "ABC";
	std::string s2 = "XY";

	auto ret1 = std::max(s1, s2);  // "XY"!

	// s1, s2 중 문자열의 길이가 큰 것은 ?
	auto ret2 = std::ranges::max(s1, s2);
}