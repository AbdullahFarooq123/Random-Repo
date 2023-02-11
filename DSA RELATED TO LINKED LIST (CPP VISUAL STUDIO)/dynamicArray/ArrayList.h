#pragma once
#include"Node.h"
template<class dataType>
class ArrayList{
private:
	Node<dataType> *startPointer;
	Node<dataType>* endPointer;
	int values;
public:
	ArrayList();
	void add(dataType);
};
template<class dataType>
ArrayList<dataType>::ArrayList(){
	startPointer = new Node<dataType>(0, nullptr);
	endPointer = startPointer->getNextLocation();
	values = 0;
}
template<class dataType>
void ArrayList<dataType>::add(dataType value) {

}

