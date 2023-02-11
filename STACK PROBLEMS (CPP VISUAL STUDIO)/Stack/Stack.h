#pragma once
template <class type>
class Stack{
private:
	type stack[50];
	int size;
	int length;
public :
	Stack() {
		size = 0;
		length = 50;
	}
	bool push(type value) {
		if (!isFull()) stack[size++] = value;
		return !isFull();
	}
	type pop() {
		return stack[--size];
	}
	inline int getSize() { return size; }
	inline int getTop() { return stack[size-1]; }
	inline bool isEmpty() { return size <= 0; }
	inline bool isFull() { return size >= length; }
	inline void setSize(int SIZE) { this->size = SIZE; };
};

