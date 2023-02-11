#pragma once
#include"dynamicArray.h"
/*
* -Class linear queue 
* 1.Extends dynamic array
* 2.The members of parent are protected
* 3.The dynamic pointer, variable of parent, is used as tail of queue
* 4.The head is the variable to show the head of queue
*/
template<class dataType>
class linearQueue:protected dynamicArray<dataType>{
protected:
	int head;
public:
	linearQueue(int size = 1);
	bool push(dataType);
	dataType pop();
	dataType peek();
	bool isEmpty();
	bool isFull();
	int size();
	int length();
	void setConst();
};
/*
* -Constructor with default parameter
* -The head variable is initialized by the parent variable, used as tail.
* -That parent variable is already set to 0 when parent constructor was called.
*/
template<class dataType>
linearQueue<dataType>::linearQueue(int size):dynamicArray<dataType>(size) {
	head = dynamicArray<dataType>::arrayPointer;
}
/*
* -Pushes value into the array
* 1.Inserts value at the end of dynamic array
* 2.If necessary, expands the array
*/
template<class dataType>
bool linearQueue<dataType>::push(dataType value) {
	return dynamicArray<dataType>::insertAt(value, dynamicArray<dataType>::arrayPointer);
}
/*
* -Pops value out of the array, from the head
* 1.Gets a value at the head
* 2.Delete that value from the head
* 3.Shift values to the left
* 4.If necessary, shrinks the queue
* 5.Resets the head and the tail
* 6.Returns the value that was deleted
*/
template<class dataType>
dataType linearQueue<dataType>::pop() {
	dataType tempValue = dynamicArray<dataType>::get(head);
	dynamicArray<dataType>::deleteValue(head++);
	dynamicArray<dataType>::arrayPointer -= head;
	head = 0;
	return tempValue;
}
/*
* -Checks for if the queue is full
* -If head is at the start of array and tail is at the end, 
*  then queue is full
* -Returns true if queue is full
*/
template<class dataType>
bool linearQueue<dataType>::isFull() {
	return head == 0 && dynamicArray<dataType>::arrayPointer == dynamicArray<dataType>::length();
}
/*
* -Checks for if the queue is empty or not
* -If queue is empty, then head and tail are both pointing
*  at same location
* -Returns true if queue is empty
*/
template<class dataType>
bool linearQueue<dataType>::isEmpty() {
	return dynamicArray<dataType>::arrayPointer == head;
}
/*
* -Returns the size of the queue(number of elements of queue)
* -The number of elements of queue is the difference between
*  head and tail
*/
template<class dataType>
int linearQueue<dataType>::size() {
	return dynamicArray<dataType>::arrayPointer - head;
}
/*
* -Sets the dynamic array or queue to be constant.
*  i.e not to expand or shrink the size
*/
template<class dataType>
void linearQueue<dataType>::setConst() {
	dynamicArray<dataType>::setConst();
}
/*
* -Returns the total length of the queue,
*  i.e the empty space and the elements
*/
template<class dataType>
int linearQueue<dataType>::length() {
	return dynamicArray<dataType>::length();
}
/*
* -Returns the value at the head of the queue
*/
template<class dataType>
dataType linearQueue<dataType>::peek() {
	return dynamicArray<dataType>::get(head);
}



