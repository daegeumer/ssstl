
template<typename T, typename ThreadModel > class List
{	
	ThreadModel tm;
public:
	void push_front(const T& a)
	{
		tm.lock();
		// ..... 
		tm.unlock();
	}
};



List<int> st;	
int main()
{

	st.push_front(10);

}
