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
//	Point* p1 = new Point(1,2); // 메모리 할당 + 생성자 호출
//	delete p1;					// 소멸자 호출 + 메모리 해지

	Point* p2 = static_cast<Point*>(operator new(sizeof(Point))); // 메모리 할당. malloc

	operator delete(p2); // 메모리만 해지. free
}