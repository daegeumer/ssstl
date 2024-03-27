#include "show.h"
#include <array> // C++11 에서 추가된 std::array

int main()
{
	std::array<int, 5> arr = {1,2,3,4,5};

	std::cout << arr.size() << std::endl;

	// std::array 는 결국 "raw array" 입니다.
	// "raw array 로 할수 없는 작업" 은 std::array 로도 안됩니다.
	arr.push_back(0); // error
	arr.resize(20);	  // error
}