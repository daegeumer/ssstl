#include <iostream>

template<typename T>
class Ptr
{
	T* obj;
public:
	inline Ptr(T* p = 0) : obj(p) {}
	inline T* operator->() { return obj; }
	inline T& operator*() { return *obj; }
	inline ~Ptr() { delete obj; }

	// 함수 삭제 문법
	// => 컴파일러가 자동으로 만드는 함수를 만들지 못하게 할때 사용
	Ptr(const Ptr& other) = delete;

	// 복사는 안되지만 move 는 되도록하려면
	// move 생성자라는 것을 만들면 됩니다.
	inline Ptr( Ptr&& other ) noexcept  : obj(other.obj)
	{
		other.obj = nullptr; // 인자로 전달된 객체의 자원포인터는 reset
	}
};

int main()
{
	Ptr<int> p1 = new int;
	*p1 = 100;
	std::cout << *p1 << std::endl;

//	Ptr<int> p2 = p1; 	// 사용할수 없게 해봅시다.
						// 즉, 이렇게 사용하면 컴파일 에러나오게

	Ptr<int> p3 = std::move(p1);
}


