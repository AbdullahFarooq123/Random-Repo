#pragma once
template<class type>
class Stack{
private :
	type* STACK;
	int LENGTH;
public :
	Stack();
	~Stack();
	bool isEmpty();
	bool isFull();
	void push(type);
	type pop();
	int Size();
	type top();
};
template<class type>
Stack<type>::Stack() {
	STACK = new type[0];
	LENGTH = 0;
}
template<class type>
Stack<type>::~Stack() { delete[] STACK; }
template<class type>
bool Stack<type>::isEmpty() { return LENGTH == 0; }
template<class type>
void Stack<type>::push(type value) {
	type* tempStack = new type[LENGTH + 1];
	for (int i = 0; i < LENGTH; ++i) tempStack[i] = STACK[i];
	tempStack[LENGTH++] = value;
	delete[]STACK;
	STACK = tempStack;
}
template<class type>
type Stack<type>::pop() {
	int value = 0;
	if (!isEmpty()) {
		type* tempStack = new type[LENGTH - 1];
		for (int i = 0; i < LENGTH-1; ++i) tempStack[i] = STACK[i];
		--LENGTH;
		value = STACK[LENGTH];
		delete[]STACK;
		STACK = tempStack;
	}
	return value;
}
template<class type>
int Stack<type>::Size() { return LENGTH; }
template<class type>
type Stack<type>::top() { return STACK[LENGTH - 1]; }
