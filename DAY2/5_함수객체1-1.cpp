#include <algorithm>

int main()
{
	int n1 = std::max(1, 3); // C++98 표준. max 는 함수(템플릿) 입니다.
	
	int n2 = std::ranges::max(1, 3); // C++20 에서 추가, 
	int n3 = std::ranges::max.operator()(1, 3); // 함수객체로 만든것
}