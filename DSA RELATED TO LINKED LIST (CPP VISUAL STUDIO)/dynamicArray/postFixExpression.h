#pragma once
#include <string>
#include "Stack.h"
class postFixExpression {
private:
	std::string postfixExpression;
	Stack<char> STACK;
	bool isOperator(std::string);
	bool ofHigherPrecedence(char, char);
public:
	bool convertPostfix(std::string);
	void solveExpression(bool);
};
bool postFixExpression::ofHigherPrecedence(char Operator_1, char Operator_2) {
	std::string operators = "+-*/^";
	if (operators.find(Operator_1) > operators.find(Operator_2))
		return true;
	else return false;
}
bool postFixExpression::isOperator(std::string Operator) {
	std::string Operators[] = { {"+"},{"-"},{"*"},{"/"},{"+="},{"-="},{"*="},{"/="},{">"},{"<"},{">="},{"<="},{">>"},{"<<"},{"=="},{"!="},{"!"},{"++"},{"--"},
								{"&&"}, {"&"}, {"~"}, {"|"}, {"||"}, {"^"}, {"%"}, {"|="}, {"&="}, {"^="}, {"%="} };
	for (std::string temp : Operators)
		if (temp == Operator)
			return true;
	return false;
}
bool postFixExpression::convertPostfix(std::string infixExpression) {
	return false;
}
void postFixExpression::solveExpression(bool expressionIsCorrect) {

}

