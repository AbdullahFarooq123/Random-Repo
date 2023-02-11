#pragma once
#include"dynamicArray.h"
template<class dataType>
class Stack:private dynamicArray<dataType>{
public:
	Stack(int size = 5);
	bool push(dataType);
	dataType pop();
	dataType peek();
	bool isEmpty();
	bool isFull();
	int size();
	int length();
};
/*
* -Constructor to set the size of the stack
* -The constructor basically creates an instance of dynamic array
*  and use it as stack by setting its size to constant value passed
*  to the parameter of constructor
*/
template<class dataType>
Stack<dataType>::Stack(int size):dynamicArray<dataType>(size) {
	dynamicArray<dataType>::setConst();
}
/*
* -Pushes a value into the stack
* -However the value is added at the last of the array
*/
template<class dataType>
bool Stack<dataType>::push(dataType value) {
	return dynamicArray<dataType>::insertLast(value);
}
/*
* -Pops a value out of the stack
* -Basically the value at the end of array is saved
*  and then deleted from the array and that particular
*  value is returned
*/
template<class dataType>
dataType Stack<dataType>::pop() {
	dataType tempValue = peek();
	dynamicArray<dataType>::deleteValue(__super::size());
	return tempValue;
}
/*
* -Gets the top value of the stack
* -However basically it gets value at the end of the array
*  and shows it
*/
template<class dataType>
dataType Stack<dataType>::peek() {
	return dynamicArray<dataType>::get(dynamicArray<dataType>::size());
}
/*
* -Checks for the fullness of the stack
* -However it is the check of the fullness
*  of dynamically allocated array
*/
template<class dataType>
bool Stack<dataType>::isFull() {
	return dynamicArray<dataType>::isFull();
}
/*
* -Checks for the emptiness of the stack
* -That is indirectly the check of empiness
*  of the dynamic array
*/
template<class dataType>
bool Stack<dataType>::isEmpty() {
	return dynamicArray<dataType>::isEmpty();
}
/*
* -Returns the current occupation of the stack
*/
template<class dataType>
int Stack<dataType>::size() {
	return dynamicArray<dataType>::size();
}
/*
* -Returns the total size of the stack
*/
template<class dataType>
int Stack<dataType>::length() {
	return dynamicArray<dataType>::length();
}

