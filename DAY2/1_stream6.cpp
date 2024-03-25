#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <list>

int main()
{
	std::list<int> s = {1,2,3,4,5,6,7,8,9,10};
	int x[10] = {1,2,3,4,5,6,7,8,9,10};

	// 컨테이너의 모든 내용 출력
	show(s);
	show(x);	
}
