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
//	Point* p2 = new Point[10]; // error. 10개의 디폴트 생성자호출이필요한데
								// 디폴트 생성자가 없습니다.

	// 메모리 할당과 생성자 호출을 분리하면 유연성이 좋습니다.
	Point* p2 = static_cast<Point*>( operator new(sizeof(Point)*10));

	// 할당된 메모리에 10개의 객체 생성
	for( int i = 0; i < 10; i++)
	{
		new(&p2[i]) Point(0,0);
	}

	for( int i = 0; i < 10; i++)
	{
		p2[i].~Point();
	}

	operator delete(p2);
}

