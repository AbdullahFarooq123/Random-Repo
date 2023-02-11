#pragma once
#include <iostream>
using namespace std;
template<class type>
class Array
{
private :
	type *A;
	int size;
	int last;
	int noOfOccurance;
	bool putValue(int index, type value);
	inline bool isEmpty();
	inline bool isFull();
	void swap(type* value1, type* value2);
	int search(type key, int from, bool);
	bool deleteValues(type key, int from);
	void arrayLength(Array B, Array C, Array& bigArray, Array& smallArray);
	void mergeCommonValues(Array& A);
	void flex();
public :
	Array(int size = 10) {
		last = 0;
		noOfOccurance = 0;
		this->size = size;
		A = new int[size];
	}
	inline bool insertLast(type x) { return putValue(last, x); }
	inline bool insertFirst(type x) { return putValue(0, x); }
	inline bool insertAt(type x, int index) { return putValue(index, x); }
	inline bool insertAfter(type x, int key) { return putValue(++key, x); }
	inline bool insertBefore(type x, int key) { return putValue(--key, x); }
	void Populate() {
		for (int i = last; i < 9; i++)
			A[i] = rand() % 10;
	}
	inline int seqSearch(type key) { return search(key, 0,false); }
	inline int searchFrom(type key, int from) { return search(key, from,false); }
	void searchAll(type key, Array& C);
	int countKey(type key);
	bool searchSmaller(type key, int* smaller);
	bool searchAndUpdate(int oldValue, int newValue, int* indexPtr);
	bool searchAndUpdateAll(int oldValue, int newValue, Array& C);
	bool searchAndDelete(int key);
	bool searchAndDeleteAll(int key);
	Array& findCommon(Array& A, Array& B);
	double Similarity(Array& B);
	double Median();
	bool Mode(int* mode);
	void bSort();
	void inSort();
	void selSort();
	inline int operator[](int i) { return A[i]; }
	inline int getLength() { return last; }
	inline int getSize() { return size; }
	struct IType {
		int* p;
		inline IType(int* p) :p(p) {}
		inline bool operator!=(IType rhs) { return rhs.p != p; }
		inline int& operator*() { return *p; }
		inline void operator++() { ++p; }
	};
	inline IType begin() { return IType(A); }
	inline IType end() { return IType(A + last); }
};

