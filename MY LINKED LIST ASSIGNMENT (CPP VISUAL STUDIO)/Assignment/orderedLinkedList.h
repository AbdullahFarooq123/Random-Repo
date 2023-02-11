#pragma once
#include"linkedList.h"
class orderedLinkedList:public linkedlist {
public:
	bool insert(int value) {
		if (start == nullptr) start = last = new node(value);
		else {
			node* newNode = new node(value);
			node* temporaryNode = start;
			do {
				if (temporaryNode->getdata() <= newNode->getdata()&&temporaryNode->getptr()->getdata()>newNode->getdata()) {
					node* temporaryPtr = temporaryNode->getptr();
					temporaryNode->setptr(newNode->getptr());
					newNode->setptr(temporaryPtr);
					size++;
					break;
				}
				temporaryNode = temporaryNode->getptr();
			} while (temporaryNode->getptr() != nullptr || temporaryNode != nullptr);
		}
		return true;
	}
};
