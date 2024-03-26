#include <iostream>
#include <algorithm> 

// 137page 아래부분


// 핵심 : 함수 인자로 비교 정책을 담은 함수를 받아서 사용

void Sort(int* x, int sz, bool(*cmp)(int, int) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
//			if (x[i] > x[j])  

			if( cmp(x[i], x[j]) == true )
				std::swap(x[i], x[j]);
		}
	}
}
//--------------------------
// 비교 정책으로 사용할 이항함수
bool cmp1(int a, int b) { return a > b;}
bool cmp2(int a, int b) { return a < b;}

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	Sort(x, 10, cmp2); // 사용자가 비교 정책 전달
}

