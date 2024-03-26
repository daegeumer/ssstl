#include <iostream>
#include <algorithm>
#include <vector>

bool cmp(int a, int b) { return a < b; }

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// #1. 비교정책을 전달하지 않으면 오름 차순
	std::sort( v.begin(), v.end() );

	// #2. 비교 정책을 교체하는 방법.

	// #2-1. 일반함수 사용 - 인라인 치환안됨.
	std::sort( v.begin(), v.end(), cmp ); 


	// #2-2. 함수 객체 사용
	std::less<int> f1;		// 이미 C++ 표준(<functional>) 에 있습니다.
	std::sort( v.begin(), v.end(), f1 ); 

	std::less<int> f2; // 이름있는 객체. {} 을 벗어날때 까지 사용가능
	std::less<int>();  // 이름이 없는 객체(임시객체). 다음문장실행전에 파괴.

	// less 객체를 한번만 사용할 때는 임시객체 형태로 사용하세요
	std::sort( v.begin(), v.end(), std::less<int>() );  // best!!

	// #2-3. 람다 표현식 사용
	std::sort( v.begin(), v.end(), [](int a, int b) { return a < b;});
	
}









