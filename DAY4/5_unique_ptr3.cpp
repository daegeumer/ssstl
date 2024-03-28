#include <memory>
#include <iostream>

struct Freer 
{
	void operator()(void* p)
	{
		free(p);
		std::cout << "Freer operator()\n";
	}
};

int main()
{
	// 삭제자 변경
	std::unique_ptr<int> up1(new int);      // ok

//	std::unique_ptr<int> up2(new int[10]);  // 버그. 소멸자가 delete. 
											// 하지만 delete[] 해야 한다.
	
	std::unique_ptr<int[]> up2(new int[10]);  // ok
												// 단, C++14부터
	//----------------------------------------------------
	// 삭제자를 변경하려면
	// => 템플릿 2번째 인자로 삭제 방법을 담은 함수 객체 전달
	std::unique_ptr<int, Freer > up3(static_cast<int*>(malloc(sizeof(int)));


	// shared_ptr vs unique_ptr
	


}
