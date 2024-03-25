#include <iostream>
#include <vector>
#include <list>

/*
void print_first_element(std::vector<int>& v)
{
	int n = v.front();
	std::cout << n << std::endl;
}
*/
/*
template<typename T>
void print_first_element(std::vector<T>& v)
{
	// 아래 ? 자리를 채워 보세요(auto 말고)
	T n = v.front();
	std::cout << n << std::endl;
}
*/

template<typename T>
void print_first_element(T& v)
{
	// 아래 ? 자리를 채워 보세요(auto 말고)
	// T : std::list<double>
	// T::value_type : std::list<double>::value_type 이므로 "double"

	// 컨테이너 T가 저장하는 요소의 타입을 알고 싶을때는 아래 처럼 하면됩니다
	typename T::value_type  n = v.front();

	// 이 예제의 경우는 위처럼 하지 말고 그냥 auto 하면 됩니다.
	// => 하지만 복잡한 코드에서 auto 를 표기할수 없을때가 있습니다(오후수업)
	auto n1 = v.front();

	std::cout << n << std::endl;
}

int main()
{
//	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<double> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<double> v = { 1,2,3,4,5,6,7,8,9,10 };

	print_first_element(v);
}

// 모든 templpate 기반의 컨테이너는 "자신이 저장하는 요소의 타입" 이 있습니다.
// 그 타입을 외부에서 알고 싶을때가 있습니다.
// 위에 만든 print_first_element() 처럼
// 그래서 STL 이 아래처럼 설계 되었습니다.
/*
template<typename T>
class list 
{
public:
	using value_type = T; // <=== 핵심
	using iterator = slist_iterator<T>;
};

std::list<int> s = {1,2,3};

std::list<int>::value_type n = s.front(); // n의 타입은 ?
*/

// 클래스            : 멤버 데이타 + 멤버 함수로 구성
// 클래스 템플릿(STL) : 멤버 데이타 + 멤버 함수 + 멤버 타입 으로 구성
//											value_type 같은 개념

// cppreference.com 에서 std::list 검색 