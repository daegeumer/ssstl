#include <vector>
#include <iostream>


template<typename T>
class debug_alloc
{
public:
	T* allocate( std::size_t sz) 
	{
		void* p = malloc(sizeof(T) * sz);
		printf("allocate : %p %d cnt\n", p, sz);
		return static_cast<T*>(p);
	}
	void deallocate(T* p, std::size_t sz)
	{
		printf("deallocate : %p %d cnt\n", p, sz);
		free(p);
	}

	using value_type = T;
	debug_alloc() {} 

	template<typename U>
	debug_alloc( const debug_alloc<U>& ) {} 
};

int main()
{

	std::vector<int, debug_alloc<int> > v;

	std::cout << "-----------------\n";
	v.resize(5);

	std::cout << "-----------------\n";
	
	v.resize(10);
	std::cout << "-----------------\n";
	
	v.resize(7);
	std::cout << "-----------------\n";
}


