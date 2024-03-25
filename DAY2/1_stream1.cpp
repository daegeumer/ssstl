#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // C++에서 파일 입출력 객체

int main()
{
	int n = 10;

	std::cout << n << std::endl;

	// 출력 스트림 반복자
	std::ostream_iterator<int> p(std::cout, " ");

	*p = 10; // std::cout << 10 << " "
	*p = 20; // std::cout << 10 << " "


	std::ofstream fout("a.txt"); // 출력 파일 객체
	std::ostream_iterator<int> p2(fout, " ");

	*p2 = 10; // a.txt 에 출력
	*p2 = 20;

}
