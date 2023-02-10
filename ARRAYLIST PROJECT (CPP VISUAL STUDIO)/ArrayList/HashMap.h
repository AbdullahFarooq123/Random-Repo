#pragma once
template <class type1,class type2>
class HashMap
{
public:
	struct map {
		type1 key;
		type2 value;
		map(){}
		map(type1 key, type2 value) :key(key), value(value) {};
		inline type1* getKey() { return key; }
		inline type2* getValue() { return value; }
		inline void setKey(type1 key) { this->key = key; }
		inline void setValue(type2 value) { this->value = value; }
	};
private:
	int length;
	map* Array;
	void expand() {
		map* tempArray = new map[length + 1];
		for (int i = 0; i < length; i++)
			tempArray[i] = Array[i];
		if (length > 1) delete[] Array;
		Array = &tempArray;
	}
	void addValue(type1 key , type2 value) {
		int index;
		if (search(key, &index)) {
			Array[index].setValue(value);
			return;
		}
		expand();
		Array[length++] = map(key,value);
	}
	bool search(type1 key,int * index) {
		for (int i = 0; i < length; i++)
			if (Array[i].getKey() == key) {
				*index = i;
				return true;
			}
		return false;
	}
public : 
	HashMap(){
		length = 0;
		Array = new map[0];
	}
	void put(type1 key, type2 value) {
		addValue(key, value);
	}
	int getLength() { return length; }
};

