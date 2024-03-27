#include <iostream>

template<typename T>
struct Hash;

template<>
struct Hash<int>
{
	int operator()(int n) const 
	{
		std::cout << "int를 위한 hash함수알고리즘\n";
		return 0;
	}
};

int main()
{
	Hash<int> hi;
	int n = hi(10);
}