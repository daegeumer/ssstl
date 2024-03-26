#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
	std::vector<int> v1;		

	// 아래 코드가 몇번의 메모리 할당이 있을지 생각해 보세요
	for( int i = 0; i < 30; i++)
	{
		v1.push_back(0); 
	}
}

