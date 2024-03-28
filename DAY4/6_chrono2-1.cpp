#include <iostream>
#include <chrono>

int main()
{
	// 길이를 나타내는 단위를 설계해 봅시다.
	using Meter      = std::chrono::duration<int, std::ratio<1,1>>;
	using KiloMeter  = std::chrono::duration<int, ?>;
	using CentiMeter = std::chrono::duration<int, ?>;

	KiloMeter km(1); // 1km

	CentiMeter cm(km);

	std::cout << cm.count() << std::endl;

}
