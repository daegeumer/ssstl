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
	auto p = m.find("wed"); // find(키값)

	// p를 사용해서 "wed : 수요일" 이라고 출력해보세요





	// #3. [] 연산자
	std::cout << m["sun"] << std::endl; 
}




