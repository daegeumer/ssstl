// 7_map2 예제 복사해오세요
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <unordered_map>
#include <algorithm>
#include "show.h"

int main()
{
	std::ifstream fin("7_map2.cpp");

	std::string s;
	int no = 0;
	std::string word;

//	std::map<std::string, std::vector<int>> index; 
	std::unordered_map<std::string, std::vector<int>> index; 

	while( std::getline(fin, s) )
	{
		++no;
		std::istringstream iss(s);

		while( iss >> word )
		{
			index[word].push_back(no);
		}
	}
	//==========================
	for( const auto& [key, value] : index) 
	{
		std::cout << key << " : ";
		show(value);
	}

}


