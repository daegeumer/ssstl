// insert2.cpp
#include <iostream>
#include <algorithm>
#include <list>


int main(int argc, char** argv)
{	
	std::list<int> s1 = { 1, 2, 3, 4, 5 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };
	
	// #1. s1 의 모든 요소를 s2에 "덮어쓴것"
//	std::copy(s1.begin(), s1.end(), s2.begin()); 

	// #2. s1의 모든 요소를 s2에 "추가" - push_back 사용
//	for( auto& e : s1)
//		s2.push_back(e);

	// #3. 삽입반복자 - 클래스 버전 사용
	std::back_insert_iterator< std::list<int>> p(s2);

	std::copy( s1.begin(), s1.end(), p);




	for (auto& n : s2)
		std::cout << n << std::endl; 
}
