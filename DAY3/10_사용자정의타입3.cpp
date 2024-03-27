
#include <vector>
#include <algorithm>
#include "show.h"
class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b)
	{
		std::cout << "Point()" << std::endl;
	}
	~Point() { std::cout << "~Point()" << std::endl; }

	Point(const Point& p)
	{
		std::cout << "Point(const Point&)" << std::endl;
	}
	void dump() const 
	{
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	std::vector<Point> v;

	v.emplace_back(1, 2); // Point(1,2)
	v.emplace_back(2, 3);
	v.emplace_back(3, 2);
	v.emplace_back(0, 1);

	// 사용자 정의 타입을 컨테이너 보관할수 있지만
	// 알고리즘 사용시에는 알고리즘의 요구조건을 충족해야 합니다.
	// => std::sort() 사용하려면 크기 비교가 가능해야 합니다.
//	std::sort(v.begin(), v.end()); // error

	// 방법 1. 람다표현식으로 비교 정책전달
	std::sort( v.begin(), v.end(), 
				[](const Point& p1, const Point& p2){ return p1.x < p2.x;});

}




