#include <list>
#include <vector>
#include <iostream>

template<typename C> 
void container_element_type(C& c)
{

}

int main()
{
	std::vector<int> v = {1,2,3};
	container_element_type(v);
}