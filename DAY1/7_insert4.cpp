#include <iostream>
#include <list>

int main()
{
	std::list<int> s = {1,2,3};

	my_back_insert_iterator< std::list<int> > p(s);

	*p = 10;
}