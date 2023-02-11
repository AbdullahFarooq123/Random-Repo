#pragma once
template<class dataType>
class Node{
private:
	dataType data;
	Node* nextLocation;
public:
	Node(){}
	Node(dataType, Node*);
	dataType getData();
	Node* getNextLocation();
};
template<class dataType>
Node<dataType>::Node(dataType data, Node* nextLocation):data(data),nextLocation(nextLocation){}
template<class dataType>
dataType Node<dataType>::getData() {
	return data;
}
template<class dataType>
Node<dataType>* Node<dataType>::getNextLocation() {
	return nextLocation;
}

