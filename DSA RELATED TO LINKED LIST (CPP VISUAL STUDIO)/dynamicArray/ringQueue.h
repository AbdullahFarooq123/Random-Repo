#pragma once
#include"linearQueue.h"
/*
* -Class ringQueue
* 1.Extends linear queue
* 2.The members of parent are protected
* 3.The values variable is used to check the presence of values in the queue
*/
template<class dataType>
class ringQueue{
private:
	dataType* pointer;
	int head;
	int tail;
	int Length;
	int values;
	bool constant;
	void shrink();
	void expand();
public:
	ringQueue(int length = 1);
	bool push(dataType);
	dataType pop(bool toShrink = true);
	dataType peek();
	bool isFull();
	bool isEmpty();
	int length();
	int size();
	void setConst();
};
/*
* -Default constructor to set the default value of size
* 1.Sets the value variable to 0
*/
template<class dataType>
ringQueue<dataType>::ringQueue(int length){
	pointer = new dataType[length];
	values = head = tail = 0;
	constant = false;
	Length = length;
}
/*
* -Push a value
* 1.If the tail of queue reaches the end of dynamic array,
*   to make it look circular, the tail is set to 0.
* 2.If the condition for the emptiness of linear queue holds,
*   i.e head and tail points at the same location, but the values are present,
*   returns false
* 3.If value is pushed into the memory, then returns true by increasing the value of variable
* 4.If reaches the end of function, returns false
*/
template<class dataType>
bool ringQueue<dataType>::push(dataType value){
	if (!constant) expand();
	bool notFull = !isFull();
	if (tail >= Length || tail < 0) tail = 0;
	if (notFull) {
		pointer[tail++] = value;
		values++;
	}
	return notFull;
}
/*
* -Pops value from the array
* -Gets a value at the head of the queue
* -Points the head to the very next location
* -If heads get out of the queue, sets the head to 0
* -Reduces values variable, to indicate a value is been reduced
* -Clamps the value to 0, if it is less than 0
* -Returns the value popped
*/
template<class dataType>
dataType ringQueue<dataType>::pop(bool toShrink) {
	if (head >= Length)head = 0;
	dataType tempValue = pointer[head++];
	values = --values < 0 ? 0 : values;
	if (!constant&&toShrink) shrink();
	return tempValue;
}
template<class dataType>
bool ringQueue<dataType>::isFull() {
	return (head == tail) && values;
}
template<class dataType>
bool ringQueue<dataType>::isEmpty() {
	return !values;
}
template<class dataType>
int ringQueue<dataType>::length() {
	return Length;
}
template<class dataType>
int ringQueue<dataType>::size() {
	return values;
}
template<class dataType>
void ringQueue<dataType>::setConst() {
	constant = true;
}
template<class dataType>
dataType ringQueue<dataType>::peek() {
	return pointer[head];
}
template<class dataType>
void ringQueue<dataType>::shrink() {
	if (values / Length * 100 <= 35) {
		head = head >= Length ? 0 : head;
		int decreasedLength = Length / 2;
		int noOfElements = 0;
		dataType* tempPointer = new dataType[decreasedLength];
		int headPointer = decreasedLength - (Length - head);
		headPointer = headPointer < 0 ? 0 : headPointer;
		int index = headPointer;//(Length - head) = to calculate no of elements from head to the Length of first array.
		while (values) {
			tempPointer[index++] = pop(false);
			++noOfElements;
			index = head >= Length ? 0 : index;
		}
		values = noOfElements;
		head = headPointer;
		tail = index;
		Length /= 2;
		delete[]pointer;
		pointer = tempPointer;
	}
}
template<class dataType>
void ringQueue<dataType>::expand() {
	if (values / Length * 100 >= 85) {
		int increasedLength = Length * 2;
		int noOfElements = 0;
		dataType* tempPointer = new dataType[increasedLength];
		int headPointer = increasedLength - (Length - head);
		int index = headPointer;//(Length - head) = to calculate no of elements from head to the Length of first array.
		while (values) {
			tempPointer[index++] = pop(false);
			++noOfElements;
			index = head >= Length ? 0 : index;
		}
		values = noOfElements;
		head = headPointer;
		tail = index;
		Length *= 2;
		delete[]pointer;
		pointer = tempPointer;
	}
}


