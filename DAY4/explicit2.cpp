#include <vector>
#include <string>

void f1(std::vector<int> v) {}
void f2(std::string s) {}

int main()
{
	f2("hello"); // ok
	std::string s1 = "hello"; // ok
	std::string s2("hello");  // ok 
							// string(const char*) 생성자는 explicit 아님.

	f1(10);	// error
	std::vector<int> v1 = 10;	// error
	std::vector<int> v2(10);	// ok
								// vector(int) 생성자는 explicit!!
}