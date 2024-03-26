#include <iostream>
#include <algorithm> 

// 137page 아래부분


// 핵심 : 함수 인자로 비교 정책을 담은 함수를 받아서 사용

// 장점 : 비교 정책의 교체가 되므로 유연성이 좋다.
// 단점 : 비교시 다시 함수를 호출하게 되므로 느리다.
//       cmp1, cmp2 을 inline 으로 만들어도 "함수포인터에 담아서 사용"
//       하므로 치환될수 없다.

// 비교 정책 교체가 가능한데!!! 인라인 치환이 되게 할수 없을까 ??
// => C언어로는 안됨. 
// => STL 은 가능.

void Sort(int* x, int sz, bool(*cmp)(int, int) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
//			if (x[i] > x[j])  	// 1

			if( cmp(x[i], x[j]) == true )	// 2
				std::swap(x[i], x[j]);
		}
	}
}
//--------------------------
// 비교 정책으로 사용할 이항함수
inline bool cmp1(int a, int b) { return a > b;}
inline bool cmp2(int a, int b) { return a < b;}

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	Sort(x, 10, cmp2); // 사용자가 비교 정책 전달
}

