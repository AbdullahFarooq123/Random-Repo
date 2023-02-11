#pragma once
#include <string>
#include "Stack.h"
class postFixExpression{
private:
	std::string postfixExpression;
	Stack<char> STACK;
	bool isOperator(char Operator) { return (Operator == '+') || (Operator == '-') || (Operator == '/') || (Operator == '*') || (Operator == '^'); }
	bool ofHigherPrecedence(char, char);
public:
	bool convertPostfix(std::string);
	void solveExpression(bool);
};

