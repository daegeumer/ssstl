#include <iostream>

// 1. template 으로 만드는 것이 관례 입니다.
// 2. 얕은 복사 문제를 해결해야 합니다.
//    => 관례적으로 참조계수 기술 사용

template<typename T>
class Ptr
{
	T* obj;
	int* ref;
public:
	Ptr(T* p = 0) : obj(p) 
	{
		ref = new int;
		*ref = 1;
	}

	Ptr(const Ptr& other) 
		: obj(other.obj), ref(other.ref)
	{
		++(*ref);
	}


	~Ptr() 
	{ 
		if ( --(*ref) == 0 )
		{
			delete obj;
			delete ref;
		}
	}



	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};

int main()
{
	Ptr<int> p1 = new int;
	*p1 = 10;

	Ptr<int> p2 = p1; // 이때 현상을 생각해 보세요
}


