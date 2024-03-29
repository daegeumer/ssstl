﻿#include <atomic>

int a = 0;
int b = 0;

// foo, goo 는 다른 스레드가 실행합니다.
void foo()
{
	a = b + 1;
	std::atomic_thread_fence( std::memory_order_seq_cst );
	b = 1;
}

void goo()
{
	if (b == 1)
	{
		// a는 반드시 1일까요 ?
	}
}

int main()
{
}
