#include <iostream>

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
	vector(std::size_t s) : sz(s), capcity(s) 
	{
		buff = new T[sz];
	}
};
int main()
{
	vector<Point> v(10);

}

