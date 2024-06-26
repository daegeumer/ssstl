﻿#include <stack>
#include <queue> // queue, priority_queue
#include <iostream>
#include "show.h"

int main()
{
	// 우선순위큐 : 요소를 꺼낼때 우선순위가 가장 높은
	//			요소가 나오게 된다.
//	std::priority_queue<int> pq;

	// 우선순위큐는 2개의 단위 전략 사용
	// 내부 컨테이너, 비교 정책을 담은 함수 객체

	// 단위 전략클래스는 요구조건이 있습니다
	// PQ 의 2번째 인자 : sequence container
	// PQ 의 3번째 인자 : () 연산자를 재정의한 이항 함수 객체

	std::priority_queue<int, std::vector<int>, std::greater<int> > pq;

	pq.push(10);
	pq.push(-10);
	pq.push(-20);
	pq.push(20);
	pq.push(15);

	std::cout << pq.top() << std::endl; // 20
	pq.pop();
	std::cout << pq.top() << std::endl; // 15

}



