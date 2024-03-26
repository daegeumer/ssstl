// 5_함수객체10.cpp - 함수객체2 복사
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {1,2,6,4,3,5,7,9, 8,10};

	int k = 3; 

	// 람다 표현식은 "지역변수를 캡쳐" 할수 있습니다.
	// [k] : 람다표현식에서 k를 사용하겠다는 의미
    auto ret2 = std::find_if(v.begin(), v.end(), 
									[k](int n) { return n % k == 0;}); 
	//---------------------------------------
	class CompilerGeneratedName
	{
		int k;	// 람다표현식에서 캡쳐를 사용하면 멤버 데이타가 추가됩니다
	public:
		CompilerGeneratedName(int n) : k(n) {}

		inline auto operator()(int n) const 
		{
			return n % k == 0;
		}
	};
	auto ret2 = std::find_if(v.begin(), v.end(), CompilerGeneratedName(k)); 
	// 결국 함수객체3.cpp 에서 만든 "IsDivide" 와 동일한 원리 입니다.
}



