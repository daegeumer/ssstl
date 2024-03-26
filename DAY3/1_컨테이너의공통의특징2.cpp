// 1_컨테이너의공통의특징2.cpp
template<typename T>
class Stack 
{
};

class People {};

int main()
{
	Stack<People> s;

	s.push( People() );

	People = s.pop(); // 이 한줄을 생각해 봅시다.

}