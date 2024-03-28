#include <iostream>
#include <memory>

void foo(void* p) { free(p); }

int main()
{
	// 삭제자 변경
	std::shared_ptr<int> sp1(new int); // ok. sp1 의 소멸자가 delete


	std::shared_ptr<int> sp2(static_cast<int*>(malloc(sizeof(int))));
						// 잘못된 코드, 소멸자에서 free 가아닌 delete

	std::shared_ptr<int> sp3((int*)malloc(sizeof(int)), foo); // ok
						// ok. sp3 파괴시 소멸자에서 foo 호출

	std::shared_ptr<int> sp4((int*)malloc(sizeof(int)), free); 

	//-----------------------------------------------------------
	// 배열로 할당
	std::shared_ptr<int> sp5(new int[10]); // 버그, 잘못된 코드.
											// delete 가 아닌 delete[] 필요

	std::shared_ptr<int> sp6(new int[10], [](int* p) { delete[] p; });//ok

	// C++17 부터는 아래 처럼 하면 됩니다.
	std::shared_ptr<int[]> sp7(new int[10]);

	// 그런데, new int[10] 이 필요하면 vector 가 더 좋지 않을까 ??
	// => 권장.
	//------------------------------------------------------------
}












