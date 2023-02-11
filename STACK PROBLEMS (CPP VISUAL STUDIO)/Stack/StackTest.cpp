#include "Stack.h"
#include <iostream>
using namespace std;
int main() {
	Stack<int> stack;
	int i = 1;
	while (stack.push(i++));
	int value;
	while (stack.pop(&value))
		cout << value << "\t";
}
