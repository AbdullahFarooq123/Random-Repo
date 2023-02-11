#include <iostream>
#include "postFixExpression.h"
bool postFixExpression::ofHigherPrecedence(char Operator_1, char Operator_2) {
	std::string operators = "+-*/^";
	if (operators.find(Operator_1) > operators.find(Operator_2))
		return true;
	else return false;
}
bool postFixExpression::convertPostfix(std::string infixExpression) {
	int OPERATORS = 0;
	int OPERANDS = 0;
	int INDEX = 0;
	for (char character : infixExpression) {
		if (!isOperator(character)) {
			std::cout << character;
			postfixExpression.push_back(character);
			OPERANDS++;
		}
		else {
			if (ofHigherPrecedence(character, STACK.top()) || STACK.isEmpty() || character == '^') STACK.push(character);
			else {
				while (!ofHigherPrecedence(character, STACK.top()) && !STACK.isEmpty()) {
					postfixExpression.push_back(STACK.top());
					std::cout << STACK.pop();
				}
				STACK.push(character);
			}
			OPERATORS++;
		}
	}
	if (OPERATORS != OPERANDS - 1) return false;
	while (!STACK.isEmpty()) {
		postfixExpression.push_back(STACK.top());
		std::cout << STACK.pop();
	}
	return true;
}
void postFixExpression::solveExpression(bool expressionIsCorrect) {
	Stack<int>STACK;
	if (!expressionIsCorrect) {
		system("cls");
		std::cout << "Expression inbalanced!";
		exit(1);
	}
	std::cout << std::endl;
	for (char character : postfixExpression) {
		if (!isOperator(character)) STACK.push(character);
		else {
			int rightOperand = STACK.pop() - '0';
			int leftOperand = STACK.pop() - '0';
			int value = 0;
			switch (character) {
			case'+':
				value = leftOperand + rightOperand ;
				break;
			case'-':
				value = leftOperand - rightOperand ;
				break;
			case'*':
				value = leftOperand * rightOperand ;
				break;
			case'/':
				value = leftOperand / rightOperand ;
				break;
			}
			STACK.push(value);
		}
	}
	std::cout << "SOLVED : " << STACK.top();
}
