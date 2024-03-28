#include <iostream>
#include <memory>

void foo(void* p) { free(p); }

int main()
{
	// 삭제자 변경
	std::shared_ptr<int> sp1(new int); // ok. sp1 의 소멸자가 delete


	std::shared_ptr<int> sp2(static_cast<int*>(malloc(sizeof(int))));

}







