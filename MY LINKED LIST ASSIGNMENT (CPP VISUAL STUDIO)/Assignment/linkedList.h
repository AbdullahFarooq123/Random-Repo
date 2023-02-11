#pragma once
#include<iostream>
#include"node.h"
using namespace std;
class linkedlist{

protected:
	node* start; //this pointer always points towards the first node in the linked list
	node* last;  //this pointer always points towards the last node in the linked list
	int size;    //this variable holds the number of nodes in the linked list
public:

	linkedlist(){
		//set the start and last to null and size to zero
		start = last = nullptr;
		size = 0;
	}

	bool insert(int value){
		//create new node on heap with the provided value
		//insert this node at the end of the linked list
		if (start == nullptr) start = last = new node(value);
		else {
			node* temporaryNode = last;
			last = new node(value);
			temporaryNode->setptr(last);
		}
		size++;
		return true;
	}


	bool find(int key){
		//search for the specfic value in the linked list and return true if it in the linked list otherwise false
		node* temporaryNode = start;
		while (temporaryNode->getptr() != nullptr || temporaryNode != nullptr) {
			if (temporaryNode->getdata() == key) return true;
			else temporaryNode = temporaryNode->getptr();
		}
		return false;
	}

	void display(){
		//print all the values of the nodes in the linked list
		node* temporaryNode = start;
		while (temporaryNode != nullptr) {
			cout << temporaryNode->getdata() << " " ;
			temporaryNode = temporaryNode->getptr();
		}
		
	}

	int get(int index){
		//return the value at provided index
		//handle the issue if index is larger then the size of linked list
		if (index < 0)index = 0;
		else if (index >= size)index = size - 1;
		int i = 0;
		node* temporaryNode = start;
		while (temporaryNode->getptr() != nullptr || temporaryNode != nullptr ) {
			if(index == i++) return temporaryNode->getdata();
			temporaryNode = temporaryNode->getptr();
		}
		return 0;
	}

	bool removeat(int index){
		//reomve the node at provided index from the linked list and dealocate it from memory
		//return true if node is successfuly removed otherwise return false
		if(index > size - 1 || index < 0 ) return false;
		int i = 0;
		node* temporaryNode = start;
		do {
			if (index == ++i) {
				node* temporaryPtr = temporaryNode->getptr()->getptr();
				delete temporaryNode->getptr();
				temporaryNode->setptr(temporaryPtr);
				--size;
				break;
			}
			else temporaryNode = temporaryNode->getptr();
		} while (temporaryNode->getptr() != nullptr && temporaryNode != nullptr);
		return true;
	}

	bool remove(int value){
		//remove the node if the value provided matches in the linked list at first occurance
		//return true if node is successfuly removed otherwise return false
		int i = 0;
		node* temporaryNode = start;
		do {
			if (value == temporaryNode->getdata()) {
				node* tempPtr = temporaryNode->getptr()->getptr();
				delete temporaryNode->getptr();
				temporaryNode->setptr(tempPtr);
				--size;
				break;
			}
			temporaryNode = temporaryNode->getptr();
		} while (temporaryNode->getptr() != nullptr && temporaryNode != nullptr);
		return true;
	}

	bool remove(int value, int occurance){
		//remove the node if the value provided matches in the linked list at PROVIDED occurance
		//return true if node is successfuly removed otherwise return false
		int i = 0;
		node* temporaryNode = start;
		do {
			if (value == temporaryNode->getdata() && i++ == occurance) {
				node* tempPtr = temporaryNode->getptr()->getptr();
				delete temporaryNode->getptr();
				temporaryNode->setptr(tempPtr);
				--size;
				break;
			}
			temporaryNode = temporaryNode->getptr();
		} while (temporaryNode->getptr() != nullptr && temporaryNode != nullptr);
		return true;
	}

	bool isEmpty(){
		//return true if there is no element in linked list other wise return false
		if (size == 0)
			return true;
		else
			return false;
	}

	int getSize(){
		//return number of elements in the linked list
		return size;
	}

	~linkedlist(){
		// dealocate all the nodes from the heap memory
		node* temporaryNode = start;
		do {
			delete temporaryNode->getptr();
			temporaryNode = temporaryNode->getptr();
		} while (temporaryNode->getptr() != nullptr || temporaryNode != nullptr);
		delete[]start;
		start = last = nullptr;
	}
	void removeDuplicates() {
		node* head = start;
		while (head!=nullptr){
			node* afterHead = head->getptr();
			node* before = head;
			while (afterHead != nullptr) {
				if (head->getdata() == afterHead->getdata()) {
					before->setptr(afterHead->getptr());
					if (last == afterHead)last = before;
					delete afterHead;
				}
				before = afterHead;
				afterHead = afterHead->getptr();
			}
			head = head->getptr();
		}
	}

protected:
	bool insert(int value, int index){
		//create new node on heap with the provided value
		//insert this node at the PROVIDED index of the linked list
		if (index<0 || index>size) return false;
		node* newNode = new node(value);
		node* temporaryNode = start;
		int i = 0;
		do {
			if (index == i++) {
				node* temporaryPtr = temporaryNode->getptr();
				temporaryNode->setptr(newNode);
				newNode->setptr(temporaryPtr);
				break;
			}
			temporaryNode = temporaryNode->getptr();
		} while (temporaryNode->getptr() != nullptr || temporaryNode != nullptr);
		return true;
	}
};

