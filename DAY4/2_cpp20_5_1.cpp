#include <string>
#include <algorithm>
#include <functional>
#include <iostream>

int main()
{
	std::string s1 = "ABC";
	std::string s2 = "XY";

	auto ret1 = std::max(s1, s2);  // "XY"!	  s1, s2 를 < 연산으로 비교

	// s1, s2 중 문자열의 길이가 큰 것은 ?
	auto ret2 = std::max(s1.size(), s2.size()); // 이코드는 반환타입도 int

	// s1, s2 의 멤버중 4번째인자로 보낸 멤버를 호출한 결과를
	// 3번째 인자로 보낸 함수(객체)로 비교해 달라.
	// 4번째 인자를 "projection" 이라고 합니다.
	// s1, s2 ====> projection 을 통과한 결과를 ====> 비교함수로전달
	auto ret3 = std::ranges::max(s1, s2, std::less{}, &std::string::size );
//	auto ret3 = std::ranges::max(s1, s2, {}, &std::string::size );
}