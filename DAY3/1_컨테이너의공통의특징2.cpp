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


	try
	{
		People p = s.pop(); // 이 한줄을 생각해 봅시다.(제거와 반환을 동시에 한다면)
						// 1. stack 에서 제거하고
						// 2. 반환하게 됩니다.
						// 3. "p = 반환값" 에서 복사 생성자 호출. 
						//    복사생성자에서 예외가 발생하면 ??
	}
	catch(...) {}

	// 예외를 잡았지만, stack s 는 더이상 사용할수 없습니다.
	// => 이미 데이타 손실
}
// exception safety(예외 안정성) 의 강력 보장
// => 예외가 발생해도, 잡아서 처리했다면
// => 객체의 상태는 예외 이전 상태를 보장한다는 이론.