#pragma once
#include <iostream>
using namespace std;

template<class type>
class ArrayList
{
private:
	type* array;
	int length;
	void expand() {
		const int tempSize = length + 1;
		type* tempArray = new type[tempSize];
		for (int i = 0; i < length; i++) tempArray[i] = array[i];
		if (length > 1) delete[] array;
		array = tempArray;
	}
	void putValue(int index, type value) {
		if (indexIsGood(index)) {
			if (!isEmpty())expand();
			array[length] = value;
			swap(&array[length++], &array[index]);
			return;
		}
		throw ("Error : Array out of bounds");
	}
	inline bool indexIsGood(int index) { return index >= 0 && index <= length;}
	void swap(type* ptr1, type* ptr2) {
		if (!(ptr1 == ptr2)) {
			type a = *ptr1;
			*ptr1 = *ptr2;
			*ptr2 = a;
		}
	}
public:
	ArrayList() {
		array = new type[0];
		length = 0;
	}
	~ArrayList() { delete[] array; }
	void add(type value, int index = -1) {
		try { putValue(index == -1 ? length : index , value); }
		catch (exception e) { 
			cout << e;
			exit(1); 
		}		
	}
	inline int size() {	return length;}
	inline bool isEmpty() {	return length == 0;}
	bool remove(type value,int from = 0 ) {
		bool found = false;
		type* copyArray = new type[length - 1];
		for (int i = from; i < length; i++) {
			if (array[i] == value) {
				found = true;
				continue;
			}
			copyArray[i] = array[i];
		}
		if (found) {
			length--;
			delete[] array;
			array = copyArray;
		}
		else
			cout << "Error:Value not found!\n";
		return found;
	}
	void clear() {
		delete[] array;
		array = new type[0];
		length = 0;
	}
	type get(int index) {
		if (!(index > length&&index<0))
			for (int i = 0; i < length; i++)
				if (i == index)
					return array[i];
		cout<< "Error:Index out of bounds!\n";
		exit(1);
	}
	struct IType {
		type* p;
		IType(type* p) : p(p) {};
		inline bool operator!=(IType rhs) {return rhs.p;}
		inline type& operator*() {return *p;}
		inline void operator++() {++p;}
	};
	inline IType begin() {return IType(array);}
	inline IType end() {return IType(array + length);}
};

