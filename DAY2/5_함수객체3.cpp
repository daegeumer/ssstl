#include <iostream>
#include <vector>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }


struct IsDivide 
{
	int value;
	IsDivide(int n) : value(n) {}

	bool operator()(int n) { return n % value == 0; }
};



int main()
{
    std::vector<int> v = {1,2,6,4,3,5,7,9, 8,10};

	int k = 3;

	IsDivide f(k);  // 1. f 는 내부적으로 k값을 보관합니다.
					// 2. f 는 함수처럼 사용가능합니다(단항함수)
	bool b = f(10); // 10 % k 의 의미

    auto ret1 = std::find_if(v.begin(), v.end(), foo); 
}


