#include <iostream>
#include <list>   
#include <vector>

// 반복자 무효화
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	auto p = v.begin();

	std::cout << *p << std::endl; // 1

//	v.resize(10);   // 이순간 v가 사용하는 내부 버퍼가 변경됩니다.
					// 이전에 꺼낸 모든 반복자는 사용하면 안됩니다.
					// "iterator invalidate" 라고 표현
	v.resize(3);    // 작아지면 버퍼 변경 안됩니다. 
					// 반복자 무효화 안됨

	std::cout << *p << std::endl; // ?
}



