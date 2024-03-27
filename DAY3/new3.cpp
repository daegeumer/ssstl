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
	// 힙에 객체 한개 생성
	Point* p1 = new Point(1,2); 

	// 힙에 객체 10개 만들어 보세요
	Point* p2 = ???;


}

