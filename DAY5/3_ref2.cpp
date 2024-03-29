#include <iostream>
#include <functional>

// reference_wrapper 의 원리를 생각해 봅시다.
template<typename T>
class reference_wrapper
{

};

int main()
{
	int n1 = 10;
	int n2 = 20;

	reference_wrapper<int> r1 = n1;  
	reference_wrapper<int> r2 = n2;

	r1 = r2;	

	std::cout << n1 << std::endl; 
	std::cout << n2 << std::endl; 
	std::cout << r1 << std::endl; 
	std::cout << r2 << std::endl; 
}

