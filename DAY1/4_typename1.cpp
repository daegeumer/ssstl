class Test
{
public:
	enum { value = 1 };
	using DWORD = int;
};
int p = 0;

template<typename T> void foo(T a)
{
	// "클래스이름::이름" 에서 이름은 
	// 값 일수 있고 :  enum, static member 등
	// 타입일수 있습니다 : using, inner class

	// 아래 2줄에서 * 의 의미를 생각해 보세요(1. 곱하기, 2. 포인터 변수 선언)
//	Test::value * p;	// 1 * 전역변수 p,  즉, * 는 곱하기의 의미
//	Test::DWORD * p;	// DWORD 는 타입(int)
						// 즉, 포인터 변수 p를 선언, * 는 포인터 연산자



	// 아래 코드의 의미를 생각해 보세요
	// dependent name : 템플릿 인자 T에 의존해서 꺼내는 이름
	// => 컴파일러는 무조건 이름의 의미를 "값" 으로 해석 합니다.
	T::value * p; // ok
//	T::DWORD * p; // error
	typename T::DWORD * p; // ok
							// DWORD 를 타입으로 해석해 달라는 의미.
}

int main()
{
	Test t;
	foo(t);
}
