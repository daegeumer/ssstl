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
	v.resize(5);	// 5개 할당

	std::cout << "-----------------\n";
	
	v.resize(10);	// 1. 10개할당
					// 2. 5개 => 10개 버퍼에 복사
					// 3. 5개 해지

	std::cout << "-----------------\n";
	
	v.resize(7);	// 줄어드는 경우는 메모리 재할당 없음
	std::cout << "-----------------\n";

	v.clear();    // 메모리 제거안됨.
	std::cout << "-----------------\n";

}	// <= vector v 소멸자 호출   10개 제거.


