#pragma once
#include<iostream>
#include<string>
#include <fstream>
#include "Stack.h"
class bracketsValidity:Stack<char> {
private:
	std::string filePath;
	std::string fileInput;
	/*
	* Checks if the bracket is a closing bracket
	*/
	inline bool isClosing(char value) { return value == '}' || value == ']' || value == ')'; }
	/*
	* Checks if the bracket is an opening bracket
	*/
	inline bool isOpening(char value) { return value == '{' || value == '[' || value == '('; }
	/*
	* Finds the opening bracket of the specific closing bracket
	*/
	inline char findOpening(char value) { return (value == '}' ? '{' : (value == ']' ? '[' : '(')); }
public:
	bracketsValidity(std::string);
	bool bracketIsGood();
};

