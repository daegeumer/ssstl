#include "show.h"
#include <vector>

void f1()
{
	int x[10];
}
void f2()
{
	std::vector<int> v(10);
}

void use_array()
{
	for( int i = 0; i < 1'000'000; i++)
		f1();
}

int main()
{
	chronometry(use_array);
	chronometry(use_vector);
}