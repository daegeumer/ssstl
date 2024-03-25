// cpp20.cpp
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = {1,2,3,4};

	auto ret1 = std::find(v.begin(), v.end(), 3);
	auto ret2 = std::find(v, 3);  // 이렇게 사용하도록 할수 없었을까 ?
}