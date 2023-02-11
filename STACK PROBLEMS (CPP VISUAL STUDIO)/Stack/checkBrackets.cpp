#include<string>
#include"checkBrackets.h"
#include"Stack.h"
#include<iostream>
checkBrackets::checkBrackets(std::string file) :file(file) {}
bool checkBrackets::bracketIsGood() {
	std::ifstream(file) >> fileInput;
	//stack = Stack<char>(fileInput.length());
	bool bracketIsPresent = false;
	for (int i = 0; i < fileInput.length(); ++i) {
		if (isOpening(fileInput[i]))
			bracketIsPresent=stack.push(fileInput[i]);
		else if (isClosing(fileInput[i])) {
			if (findOpening(fileInput[i]) == stack.getTop()) 
				stack.pop();
			else 
				return false;
		}
	}
	return stack.getSize() == 0 && bracketIsPresent;
}
