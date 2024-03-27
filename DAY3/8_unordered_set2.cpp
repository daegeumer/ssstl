#include <iostream>
#include <set>
#include <unordered_set>
#include "show.h"

int main()
{
//	std::set<int> s;
	std::unordered_set<int> s;

	s.insert(10);
	s.insert(35);
	s.insert(20);
	s.insert(25);	// set 		 	 : root 와 비교해서 왼쪽/오른쪽으로 배치
					// unordered_set : 25 를 해쉬함수에 보내서, 해쉬값을 얻은후
					//					bucket 에 보관

	auto p = s.find(20); // set : root 부터 크기를 비교해서 검색
						// unordered_set : 해쉬 함수 해쉬값 얻어서 검색

	std::cout << *p << std::endl;

	show(s);

	std::cout << s.bucket_count() << std::endl;

	for( int i = 0; i < s.bucket_count(); i++ )
	{
		std::cout << s.bucket_size(i) << std::endl;
	}
}

