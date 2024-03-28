#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <ranges>
#include "show.h"

template<typename R>
class take_view
{
	R& rg;
	std::size_t cnt;
public:
	take_view(R& r, std::size_t c) : rg(r), cnt(c) {}

	auto begin() { return r.begin();}
	auto end()   { return std::next(r.begin(), cnt);}
};
int main()
{
	std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	take_view tv(v, 5);
	
//	for(auto e : v)
	for(auto e : tv)
	{
		std::cout << e << ", ";
	}	
}

