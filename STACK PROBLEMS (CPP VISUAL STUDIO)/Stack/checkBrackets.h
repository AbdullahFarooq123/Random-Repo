#pragma once
#include<string>
#include <fstream>
#include "Stack.h"
class checkBrackets {
private:
	std::string file;
	std::string fileInput;
	Stack<char> stack;
	inline bool isClosing(char value) { return value == '}' || value == ']' || value == ')'; }
	inline bool isOpening(char value) { return value == '{' || value == '[' || value == '('; }
	inline char findOpening(char value) { return (value == '}' ? '{' : (value == ']' ? '[' : '(')); }
public:
	checkBrackets(std::string);
	bool bracketIsGood();	
};

