#pragma once
template<class type>
class DynamicArray{
	type* array;
	int length;
	void expand() {
		type* copyArray = new type[length + 1];
		for (int i = 0; i < length; i++)
			copyArray[i] = array[i];
		if (length > 1)
			delete[] array;
		array = &copyArray;
	}
public:
	DynamicArray() :length(0){}
	inline int getLength() { return length; }
	inline void operator[](int i) { return array[i]; }
	inline void put(type value) { expand(); array[length] = value; }
	void deleteValue(int index) {
		type* copyArray = new type[length - 1];
		for (int i = 0; i < length; i++) {
			if(i!=index)
				copyArray[i] = array[i];
		}
		if (length > 1)
			delete[] array;
		length--;
		array = &copyArray;
	}
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

