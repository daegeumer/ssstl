#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// 2번째 부터 검색 하려고 한다.
	auto p1 = std::find( ++s.begin(),          s.end(), 3);
	auto p2 = std::find( std::next(s.begin()), s.end(), 3); //best!
}
