#include <vector>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) 
	{
		std::cout << "Point()" << std::endl;
	}
	~Point() { std::cout << "~Point()" << std::endl; }
	
	Point(const Point& p)
	{
		std::cout << "Point(const Point&) - copy" << std::endl;
	}

	Point(Point&& p)
	{
		std::cout << "Point(Point&&) - move" << std::endl;
	}

};
int main()
{
	std::vector<Point> v;

	// 실행결과 예측해 보세요
	// #1. 객체를 생성후 넣기.
//	Point pt(1, 2);
//	v.push_back(pt);

	// #2. 임시객체 형태로 넣기
//	v.push_back( Point(1, 2));

	// #3. 임시객체를 만드는 또다른 표기법
//	v.push_back( {1, 2} ); // C++11 부터 가능한 표기법

	// #4. 객체를 전달하지 말고,
	//     객체를 만들기 위한 생성자 인자만 전달하자.

	v.emplace_back(1, 2); // vector 가 내부적으로
						  // 자신의 버퍼에
						  // "new Point(1,2)"



	std::cout << "------------------" << std::endl;	
}
// 사용자 정의 타입을 보관한다면 "push_xxx" 대신 "emplace_xxx"
// push_back  => emplace_back
// push_front => emplace_front
// insert     => emplace

// 단, primitive 타입 또는 usertype* 인 경우는 push_xxx, emplace_xxx 모두 
//	비슷
// std::vector<int>		
// std::vector<Point*>


