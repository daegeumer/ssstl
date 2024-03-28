#include <iostream>

template<typename T>
struct Hash;

// template specialization(특수화) 문법
template<>
struct Hash<int>
{
	int operator()(int n) const 
	{
		std::cout << "int를 위한 hash함수알고리즘\n";
		return 0;
	}
};
template<>
struct Hash<double>
{
	int operator()(double n) const 
	{
		std::cout << "double  위한 hash함수알고리즘\n";
		return 0;
	}
};
int main()
{
	Hash<int> hi;
	Hash<double> hd;
	int n = hi(10);
}