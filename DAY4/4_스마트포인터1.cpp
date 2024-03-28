#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};

// 개념 : 임의의 객체가 다른 타입의 포인터 역활을 하는것
// 원리 : -> 와 * 연산자를 재정의해서 포인터 처럼 보이게 하는것
// 장점 : 진짜 포인터가 아닌 객체
//       생성/복사/대입/파괴의 순간에 추가적인 작업 가능
//       대표적 활용이 소멸자에서 자원을 delete 하는 기능

// 아래 코드가 핵심
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	~Ptr() { delete obj;}

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }
};

int main()
{
	Ptr p = new Car; // Ptr p( new Car )

	p->Go(); 	// "Ptr 의 객체 p" 가 "Car*" 처럼 사용됩니다.
				// (p.operator->()) Go() 의 모양인데.
				// (p.operator->())->Go() 의 형태로 해석됩니다.
	(*p).Go();
}


