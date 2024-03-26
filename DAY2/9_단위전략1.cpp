template<typename T> class List
{	
public:
	void push_front(const T& a)
	{
		// lock()
		// ..... 
		// unlock()
	}
};

List<int> st;	// st는 전역변수. 모든 스레드가 공유. 
				// 멀티스레드환경에서 안전하지 않다.
int main()
{
	// lock()
	st.push_front(10);
	// unlock()
}
