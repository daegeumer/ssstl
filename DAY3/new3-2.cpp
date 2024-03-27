#include <iostream>
#include <algorithm>
#include <memory>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) { std::cout << "Point()\n";}
	~Point()                         { std::cout << "~Point()\n";}
};

template<typename T, typename Ax = std::allocator<T>>
class vector
{
	T* buff;
	std::size_t sz;
	std::size_t capacity;
	Ax ax;
public:
	vector(std::size_t s) : sz(s), capacity(s) 
	{
//		buff = new T[sz]; // 이렇게 하면 T 가 디폴트 생성자가 있어야 한다는
						  // 제약이 생기게 됩니다.

		buff = static_cast<T*>( operator new(sizeof(T)* sz ));

		for(int i = 0; i < sz; i++)
		{
			new(&buff[i]) Point;
		}
	}
	vector(std::size_t s, const T& value) : sz(s), capacity(s) 
	{
		buff = static_cast<T*>( operator new(sizeof(T)* sz ));

		/*
		for(int i = 0; i < sz; i++)
		{
			new(&buff[i]) Point(value);
		}
		*/
		std::uninitialized_fill_n(buff, sz, value); // 위 for문이 하는일과 동일
	}	
};
int main()
{
//	Point pt(1,1);
//	vector<Point> v(10, pt);
	vector<Point> v(10, Point(0,0));

}

