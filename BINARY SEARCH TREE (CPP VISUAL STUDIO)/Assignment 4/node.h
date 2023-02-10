#pragma once
class Node {

private:

	int data;
	Node* leftPtr;
	Node* rightPtr;

public:

	Node(int data) {
		this->data = data;
		leftPtr = rightPtr = nullptr;
	}
	void setdata(int data) { this->data = data; }
	void setleftPtr(Node* leftPtr) { this->leftPtr = leftPtr; }
	void setrightPtr(Node* rightPtr) { this->rightPtr = rightPtr; }
	int getdata() { return data; }
	Node* getleftPtr() { return leftPtr; }
	Node* getrightPtr() { return rightPtr; }
	void operator = (Node* nextNode) {
		this->data = nextNode->getdata();
		this->leftPtr = nextNode->getleftPtr();
		this->rightPtr = nextNode->getrightPtr();
	}
	bool operator > (int value) {
		return this->data > value;
	}
	bool operator < (int value) {
		return this->data < value;
	}
	bool operator == (int value) {
		return this->data == value;
	}

};

