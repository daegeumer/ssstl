// 7_insert0.cpp

// STL 의 다양한 곳에서 널리 사용되는 기법
template<typename T> 
T sqaure( T a)  { return a * a;}

template<typename T>
class List 
{
public:
	List(int sz, T value) {}
};

int main()
{
	// 다음중 편리해 보이는 것은 ?
	square<int>(3); // 정확한 표기법
	square(3);	    // 타입 파라미터 생략가능. 인자 3으로 T 타입 추론 => 편리하다!!

	List<int> s1(10, 3); // ok
	List      s2(10, 3); // 클래스템플릿의 경우 생성자를 통한 타입추론은
						 // C++17 이후 부터 가능.
}
// g++ 7_insert0.cpp -std=c++14    으로 하면 에러
// g++ 7_insert0.cpp -std=c++17    으로 하면 ok