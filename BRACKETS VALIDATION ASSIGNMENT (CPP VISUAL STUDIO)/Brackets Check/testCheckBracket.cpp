#include "checkBrackets.h"
#include<iostream>
using namespace std;
int main() {
	checkBrackets fileInput = checkBrackets("C:\\Users\\Abdullah123\\Desktop\\brackets.txt");
	if (fileInput.bracketIsGood())
		cout << "Correct sequence!";
	else
		cout << "Wrong sequence!";
}