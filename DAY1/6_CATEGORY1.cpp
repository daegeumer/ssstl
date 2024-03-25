#include <forward_list>
#include <list>

int main()
{
	std::forward_list<int> s1 = { 1,2,3 }; // 싱글링크드 리스트
	std::list<int> s2 = { 1,2,3 };	// 더블 링크드 리스트

	auto p1 = s1.begin();
	auto p2 = s2.begin();

	// 아래 4줄에서 에러를 예측해 보세요.	
	++p1; // ok
//	--p1; // error. 자료 구조 특성상 앞쪽으로 이동할수 없다.
	++p2; // ok
	--p2; // ok

}
