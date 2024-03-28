// explicit.cpp
class Vector 
{
public:
	Vector(int sz)  {}
};

void foo(Vector v) {}

int main()
{
	// 인자가 한개인 생성자가 있다면 아래 4가지 형태로 객체 생성이 가능합니다
	Vector v1(10);
	Vector v2 = 10;
	Vector v3{10};    // C++11
	Vector v4 = {10}; // C++11

	foo(10);
}