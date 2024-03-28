#include <memory>
#include <iostream>

// std::shared_ptr : 자원을 공유할수 있는 스마트 포인터
// std::weak_ptr   : 소유권이 없는 스마트 포인터
// std::unique_ptr : 자원을 독점하는 스마트 포인터.

int main()
{
	std::unique_ptr<int> up1(new int); // ok 
//	std::unique_ptr<int> up2 = up1;	   // error
	std::unique_ptr<int> up2 = std::move(up1); // ok

	std::unique_ptr<int> up3 = std::make_unique<int>();

	std::cout << sizeof(up1) << std::endl; // raw pointer 와 같은 크기
}
