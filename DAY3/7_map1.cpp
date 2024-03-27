#include <map>  
#include "show.h"

// map : pair 를 저장하는 set,   key 값으로 value 를 저장

int main()
{
	std::map<std::string, std::string> m = { {"mon", "월요일"}, {"tue", "화요일"}};

	// #1. 요소 넣기
	// 1. pair 만들어서 넣기
//	std::pair<std::string, std::string> p("wed", "수요일");
//	m.insert(p);

	// 2. make_pair
//	m.insert( std::make_pair("wed", "수요일"));

	// 3. emplace
	m.emplace("wed", "수요일"); // 자세한 내용은 "사용자 정의타입" 주제에서

	// 4. [] 연산자 사용
	m["thu"] = "목요일";
//	m["thu"] = "목"; // 기존 키값에 해당하는 value 를 변경한것
	//------------------------
	
	// #2. 반복자에 대해서
	// 반복자      : 요소를 가리키는 포인터 역활
	// map 의 요소 : std::pair
	// map 의 반복자 : std::pair* 로 생각하면 됩니다.
	auto p = m.find("wed"); // find(키값)

	// p를 사용해서 "wed : 수요일" 이라고 출력해보세요
	
	std::cout << p->first << " : " << p->second << std::endl;

	// #3. for 와 map
//	for(  auto e : m ) // e 는 std::pair 인데 복사본 생성된것
	for(  const auto& e : m ) 
	{
		std::string key = e.first;
		std::string value = e.second;
	}

	// C++17 이후 부터는 아래 처럼하세요.. 아주 편리 합니다.
	for(  const auto& [key, value ] : m ) 
	{
	}

	// #4. [] 연산자
	std::cout << m["sun"] << std::endl; 
			// 1. 키값 "sun" 이 있다면 value 반환
			// 2. 키값 "sun" 이 없다면 ["sun" ,""] 으로 새로운 항목 추가

	// 키값이 있는지 조사할때 절대 아래 처럼하지 마세요
	if ( m["sun"] == "" ) {} // 키값을 생성한것!!

	auto ret2 = m.find("sun");
	if ( ret2 == m.end() ) {} 

	// C++20  부터
	if ( m.contains("sun")) {} // 내부 원리는 위와 동일

}



	// 참고
/*
	Point pt;
	int a = pt.x;
	int b = pt.y;

	// C++17 부터 아래 코드 지원 됩니다.(structure binding)
	auto[a, b] = pt;	// auto 만 가능
//	int [a, b] = pt;   // error

	auto[error, value] = foo();
}
std::tuple<int, int> foo()
{
	return std::make_tuple(10, 20);
}
*/



