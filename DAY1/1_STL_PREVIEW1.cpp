// 1_STL_PREVIEW1
#include <iostream>
#include <list>
#include <vector>
int main()
{
	int x[5] = {1,2,3,4,5};

	// 배열 : 크기 변경을 할수 없습니다
	// vector : 크기 변경이 가능합니다.
	std::vector<int> v = {1,2,3,4,5};

	v.resize(10); // 10개로 크기 변경
}
