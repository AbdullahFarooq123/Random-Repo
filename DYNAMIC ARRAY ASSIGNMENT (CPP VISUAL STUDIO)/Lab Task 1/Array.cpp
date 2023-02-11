#pragma once
#include <iostream>
#include "Array.h"
bool Array::putValue(int index, int value) {
	if (!isFull()) {
		if (index <= last) {
			A[last] = value;
			swap(&A[index], &A[last++]);
		}
		else {
			cout << "Error : Index out of bounds!";
			exit(1);
		}
	}
	return isFull();
}
bool Array::isEmpty() { return last == 0; }
bool Array::isFull() { return last == size - 1; }
void Array::swap(int* value1, int* value2) {
	int copyValue = *value1;
	*value1 = *value2;
	*value2 = copyValue;
}
int Array::search(int key, int from, bool findOccurance = false) {
	noOfOccurance = 0;
	int value = -1;
	bool isPresent = false;
	for (int i = from; i < last; i++) {
		if (A[i] == key) {
			isPresent = key;
			if (value == -1)
				value = i;
			if (!findOccurance)
				break;
			++noOfOccurance;
		}
	}
	return value;
}
bool Array::deleteValues(int key, int from) {
	int index = search(key, from);
	bool isPresent = index == -1 ? false : true;
	if (isPresent) {
		for (int i = index; i < last; i++)
			A[i] = A[i + 1];
		--last;
	}
	return isPresent;
}
void Array::arrayLength(Array B, Array C, Array& bigArray, Array& smallArray) {
	bigArray = B.getLength() >= C.getLength() ? B : C;
	smallArray = &bigArray == &B ? C : B;
}
void Array::mergeCommonValues(Array& A) {
	for (int i = 0; i < A.getLength(); i++) {
		int index = search(A[i], i + 1);
		if (index != -1)
			A.deleteValues(A[index], index);
	}
}
/*Array::Array(int size = 10) {
	last = 0;
	noOfOccurance = 0;
	this->size = size;
	A = new int[size];
}*/
void Array::searchAll(int key, Array& C) {
	for (int i = 0; i < last; i++)
		if (A[i] == key)
			C.insertLast(i);
}
int Array::countKey(int key) {
	Array::search(key, 0);
	return noOfOccurance;
}
bool Array::searchSmaller(int key, int* smaller) {
	for (int i = 0; i < last; i++)
		if (A[i] < key) {
			*smaller = A[i];
			return true;
		}
	return false;
}
bool Array::searchAndUpdate(int oldValue, int newValue, int* indexPtr) {
	int index = Array::search(oldValue, 0);
	if (index == -1)
		return false;
	A[index] = newValue;
	*indexPtr = index;
	return true;
}
bool Array::searchAndUpdateAll(int oldValue, int newValue, Array& C) {
	bool foundValue = false;
	int j = 0;
	for (int i = 0; i < last; i++) {
		int index = Array::search(oldValue, i);
		if (index != -1) {
			A[index] = newValue;
			C.insertLast(i);
			foundValue = true;
		}
	}
	return foundValue;
}
bool Array::searchAndDelete(int key) { return Array::deleteValues(key, 0); }
bool Array::searchAndDeleteAll(int key) {
	bool isPresent = false;
	for (int i = 0; i < last; i++)
		if (Array::deleteValues(key, i))
			isPresent = true;
	return isPresent;
}
Array& Array::findCommon(Array& A, Array& B) {
	Array C, bigArray, smallArray;
	Array::arrayLength(A, B, bigArray, smallArray);
	for (int i = 0; i < bigArray.getLength(); i++)
		for (int j = 0; j < smallArray.getLength(); j++)
			if (bigArray[i] == smallArray[i])
				C.insertLast(bigArray[i]);
	Array::mergeCommonValues(C);
	return C;
}
double Array::Similarity(Array& B) {
	Array bigArray, smallArray;
	Array::arrayLength(*this, B, bigArray, smallArray);
	double lengthSimilarity = (bigArray.getLength() == smallArray.getLength()) * 100;
	double addressSimilarity = (&bigArray == &smallArray) * 100;
	double valueSimilarity = 0;
	for (int i = 0; i < smallArray.getLength(); i++)
		if (bigArray[i] == smallArray[i])
			valueSimilarity += 100.0 / bigArray.getLength();
	return (lengthSimilarity + addressSimilarity + valueSimilarity) / 3;
}
double Array::Median() {
	if (last % 2 == 0) return (double)(A[(last / 2) - 1] + A[last / 2]) / 2;
	else return A[(last / 2)];
}
bool Array::Mode(int* mode) {
	int value = A[0];
	int occurance = 0;
	for (int i = 1; i < last; i++)
		if (Array::search(A[i], i) != -1 && occurance < noOfOccurance) {
			value = A[i];
			occurance = noOfOccurance;
		}
	if (occurance) {
		mode = &value;
		return true;
	}
	return false;
}
void Array::bSort() {
	for (int i = 0; i < last - 1; i++)
		for (int j = i + 1; j < last; j++)
			if (A[i] > A[j])
				Array::swap(&A[i], &A[j]);
}
void Array::inSort() {
	int index;
	for (int i = 1; i < last; i++) {
		int key = A[i];
		index = i;
		while (index > 0 && A[index - 1] > key) {
			A[index] = A[index - 1];
			--index;
		}
		A[index] = key;
	}
}
void Array::selSort() {
	for (int i = 0; i < last; i++) {
		int minimum_index = i;
		for (int j = i + 1; j < last; j++)
			if (A[minimum_index] > A[j])
				minimum_index = j;
		Array::swap(&A[i], &A[minimum_index]);
	}
}
