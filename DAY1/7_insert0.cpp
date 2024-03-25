// 7_insert0.cpp

// STL 의 다양한 곳에서 널리 사용되는 기법
template<typename T> 
T sqaure( T a)
{
	return a * a;
}
template<typename T>
class List 
{
public:
	List(int sz, T value) {}
};

int main()
{
	// 다음중 편리해 보이는 것은 ?
	square<int>(3);
	square(3);
}