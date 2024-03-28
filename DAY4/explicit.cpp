// explicit.cpp
class Vector 
{
public:
	// explicit 생성자 : 직접 초기화만 가능하고 복사 초기화는 사용할수 없게
	//					할때 사용
	explicit Vector(int sz)  {}
};
void foo(Vector v) {}

int main()
{
	// 인자가 한개인 생성자가 있다면 아래 4가지 형태로 객체 생성이 가능합니다
	Vector v1(10);		// direct initialization(직접 초기화)
	Vector v2 = 10;		// copy			""       (복사 초기화)
	Vector v3{10};    // C++11  direct initialization(직접 초기화)
	Vector v4 = {10}; // C++11  copy			""    (복사 초기화)

	// 함수의 인자 전달은 복사 초기화 과정입니다.
	foo(10);  // Vector v = 10
}