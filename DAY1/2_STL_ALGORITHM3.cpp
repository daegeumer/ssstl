#include <iostream>

// step 3. 검색 대상 타입의 일반화

template<typename T>
T* find(T* first, T* last, T c)
{
	while ( first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	double x[10] = {1,2,3,4,5,6,7,8,9,10};

	// 주의 : 10개 배열의 마지막은 "x+9" 이지만 "x+9" 전달시 10은 검색안됨
	//       전체 검색하려면 마지막 요소의 다음 주소 전달
	double* p = find(x, x+10, 5.0);

	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}
