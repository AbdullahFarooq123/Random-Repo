#pragma once
#include<string>
#include <fstream>
class checkBrackets{
private :
	std::string file;
public :
	checkBrackets(std::string);
	bool bracketIsGood();
};

