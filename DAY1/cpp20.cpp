// cpp20.cpp
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = {1,2,3,4};

	auto ret1 = std::find(v.begin(), v.end(), 3);
//	auto ret2 = std::find(v, 3);  // 이렇게 사용하도록 할수 없었을까 ?
								// => C++ 98 시절 문법으로는 문제가 있었다.

	// C++20 의 concept 문법으로 해결책을 찾았다.
	auto ret3 = std::ranges::find(v.begin(), v.end(), 3);
	auto ret4 = std::ranges::find(v, 3); 	
}