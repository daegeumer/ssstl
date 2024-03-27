#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) { std::cout << "Point()\n";}
	~Point()                         { std::cout << "~Point()\n";}
};

int main()
{
	std::vector<Point> v = {{1,1},{2,2},{3,3}};
	
	std::cout << "--------------\n";

	v.resize(2);	// 메모리 제거 안됨

	std::cout << "--------------\n";
	
	v.push_back(Point{4,4});

	std::cout << "--------------\n";
}

