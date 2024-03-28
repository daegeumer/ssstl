#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <ranges>
#include "show.h"

int main()
{
	std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

	// #1. 중첩도 가능
	std::ranges::take_view tv(v, 5);
	std::ranges::reverse_view rv(tv);

	// #2. 단축 표기법(syntax sugar) 도 제공합니다.
	// => 리눅스 의 파이프라인은 흉내낸것

	auto rv2 = v | std::views::filter( [](int n) {return n % 2 == 0;} ) 
				 | std::views::take(3) | std::views::reverse;

	// 새롭게 나오고 있는 방식 - 아래 처럼 사용하게 하자!!
	// C# 의 Linq 방식,  Rust 의 iterator 방식
//	auto rv3 = v.filter(람다표현식).take(3).reverse();


	for(auto e : rv2)
	{
		std::cout << e << ", ";
	}	
}

