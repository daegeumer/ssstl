#include <vector>
#include <algorithm>
#include "show.h"

// 아래 구조체를 생각해 보세요
template<typename T, std::size_t N>
struct array
{
	T buff[N];
	int size() const { return N;}

	// STL 의 규칙을 지켜야 합니다.
	using value_type = T;
	using iterator = T*;

	iterator begin() { return buff;}
	iterator end() { return buff + N;}
};

int main()
{
	// 구조체 안에 배열이 있으면 아래 처럼 초기화 가능합니다.
	array<int, 5> arr = {1, 2, 3, 4, 5};

	// raw array 는 멤버 함수가 없지만 위에서 만든 array 는 멤버 함수가 있습니다.
	std::cout << arr.size() << std::endl;
}
