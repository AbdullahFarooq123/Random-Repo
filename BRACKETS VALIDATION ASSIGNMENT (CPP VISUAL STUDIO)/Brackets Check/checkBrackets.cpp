#include<string>
#include"checkBrackets.h"
checkBrackets::checkBrackets(std::string file) :file(file) {}
bool checkBrackets::bracketIsGood() {
	std::string fileInput;
	std::ifstream(file) >> fileInput;
	return fileInput.length() % 2 == 0;
}