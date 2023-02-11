#pragma once
/*
* -Class dynamic array
*/
template<class dataType>
class dynamicArray{
protected:
	int arrayPointer;
	bool constSize;
	int arrayLength;
	void changePointerLocation(dataType*);
private:
	dataType* dynamicPointer;
	bool putValue(dataType, int);
	void expand();
	void shrink();
	struct IType {
		int* p;
		inline IType(int* p) :p(p) {}
		inline bool operator!=(IType rhs) { return rhs.p != p; }
		inline int& operator*() { return *p; }
		inline void operator++() { ++p; }
	};
public:
	dynamicArray(int size = 5);
	~dynamicArray();
	bool insertLast(dataType);
	bool insertFirst(dataType);
	bool insertAt(dataType, int);
	bool deleteValue(int);
	dataType get(int);
	bool isEmpty();
	bool isFull();
	int size();
	int length();
	void setConst(bool constant = true);
	inline IType begin() { return IType(dynamicPointer); }
	inline IType end() { return IType(dynamicPointer + arrayPointer + 1); }
};
/*
* -Default constructor
* -Initializes the pointer by allocating the address from the heap
* -Sets the arrayPointer to 0
* -Sets the arrayLength to 4(the size of dynamic array)
* -Called automatically after the instance of the class is created
*/
template <class dataType>
dynamicArray<dataType>::dynamicArray(int size) {
	dynamicPointer = new dataType[size];
	arrayPointer = 0;
	arrayLength = size;
	constSize = false;
}
/*
* -Destructor
* -Deallocates the heap allocation
* -Called automatically after the instance of the class is destroyed
*/
template <class dataType>
dynamicArray<dataType>::~dynamicArray() {
	delete[] dynamicPointer;
}
/*
* -Puts value in memory
* -If index gets out of bound of the memory allocation, function returns false
* -Otherwise if the index is not equal to the array pointer then:
* 1.Saves the value at the arrayPointer
* 2.Then adds value at that specific index passed by user
* 3.Expands the allocation
* 4.return true
*/
template <class dataType>
bool dynamicArray<dataType>::putValue(dataType value, int index) {
	if ((index <= arrayPointer) && (index >= 0) && !isFull()) {
		if (index != arrayPointer) dynamicPointer[arrayPointer] = dynamicPointer[index];
		dynamicPointer[index] = value;
		arrayPointer++;
		if (!constSize) expand();
		return true;
	}
	return false;
}
/*
* -Expands the memory allocation of array
* -Checks if the data allocation in array is greater than 84
* -If it is, :
* 1.then doubles the size of array
* 2.Saves the data of array
* 3.Deallocates the previous dynamic allocation
* 4.Gives a new address to the pointer with previous values and new size
*/
template <class dataType>
void dynamicArray<dataType>::expand() {
	if (arrayPointer / arrayLength * 100 >= 85) {
		dataType* tempDynamicPointer = new dataType[arrayLength * 2];
		for (int i = 0; i < arrayPointer; i++) tempDynamicPointer[i] = dynamicPointer[i];
		delete[]dynamicPointer;
		arrayLength *= 2;
		dynamicPointer = tempDynamicPointer;
	}
}
/*
* -Shrinks the array
* -If the occupancy in the array is less than 36, then:
* 1.shrinks the array
* 2.Saves the data of previous array
* 3.Deallocates the previous allocation of the array
* 4.Gives new address to the pointer with new size
*/
template <class dataType>
void dynamicArray<dataType>::shrink() {
	if (arrayPointer / arrayLength * 100 <= 35) {
		dataType* tempDynamicPointer = new dataType[arrayLength / 2];
		for (int i = 0; i < arrayPointer; i++) tempDynamicPointer[i] = dynamicPointer[i];
		delete[] dynamicPointer;
		arrayLength /= 2;
		dynamicPointer = tempDynamicPointer;
	}
}
/*
* -Inserts value at the last of the array
*/
template <class dataType>
bool dynamicArray<dataType>::insertLast(dataType value) {
	return putValue(value, arrayPointer);
}
/*
* -Inserts value at the starting of the array
*/
template <class dataType>
bool dynamicArray<dataType>::insertFirst(dataType value) {
	return putValue(value, 0);
}
/*
* -Inserts value at the index, provided by user, of the array
*/
template <class dataType>
bool dynamicArray<dataType>::insertAt(dataType value, int index) {
	return putValue(value, index);
}
/*
* -Deletes value at the index provided by user
* -If index is out of bounds of array:
* 1.then function gets false
* -But if index is valid:
* 1.If the index is the last filled value of array then just the arraypointer becomes -1
* 2.else it overwrites values on that index to the left till the array pointer
* 3.Shrinks the array
* 4.returns true
*/
template <class dataType>
bool dynamicArray<dataType>::deleteValue(int index) {
	if (index < arrayPointer-- && index >= 0) {
		for (int i = index; i < arrayPointer; i++)	dynamicPointer[i] = dynamicPointer[i + 1];
		if (!constSize) shrink();
		return true;
	}
	return false;
}
/*
* Gets value at that specific index
* If index is invalid then:
* 1.Makes it valid
* 2.returns the value at the index
*/
template <class dataType>
dataType dynamicArray<dataType>::get(int index) {
	if (index < 0) index = 0;
	else if (index >= arrayLength) index = arrayPointer - 1;
	return dynamicPointer[index];
}
/*
* -Checks emptiness of the array
*/
template <class dataType>
bool dynamicArray<dataType>::isEmpty() {
	return arrayPointer == 0;
}
/*
* -Gets size of the array
*/
template <class dataType>
int dynamicArray<dataType>::size() {
	return arrayPointer - 1;
}
/*
* -Gets the total allocation of array
*/
template <class dataType>
int dynamicArray<dataType>::length() {
	return arrayLength;
}
/*
* -Checks for if the array is full
*/
template <class dataType>
bool dynamicArray<dataType>::isFull() {
	return arrayLength == arrayPointer;
}
/*
* -Sets the size of array to a constant value
*/
template <class dataType>
void dynamicArray<dataType>::setConst(bool constant) {
	constSize = constant;
}
/*
* -Gives a new address to the pointer
*/
template <class dataType>
void dynamicArray<dataType>::changePointerLocation(dataType* newAddress) {
	delete[]dynamicPointer;
	dynamicPointer = newAddress;
}


