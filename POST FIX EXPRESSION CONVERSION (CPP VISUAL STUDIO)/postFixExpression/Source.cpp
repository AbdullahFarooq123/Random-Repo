#include<iostream>
#include <string>
#include <Windows.h>
#include "postFixExpression.h"
using namespace std;
int main() {
	cout << "Please enter expression : ";
	std::string infixExpression;
	std::string _postFixExpression="";
	cin >> infixExpression;
	postFixExpression postFix;
	bool isCorrect = postFix.convertPostfix(infixExpression);
	postFix.solveExpression(isCorrect);
}