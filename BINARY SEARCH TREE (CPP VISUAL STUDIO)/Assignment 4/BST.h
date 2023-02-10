#pragma once
#include<stack>
#include<iostream>
#include"Node.h"
class BST{
private:

	Node* head;
	Node* find(int, Node*);
	Node* findGreatest(Node*);
	Node* findParent(int, Node*);
	Node* findLocation(int, Node*);
	void inorder(Node*);
	void preorder(Node*);
	void postorder(Node*);

public:

	BST();
	~BST();
	bool insert(int);
	bool remove(int);
	bool find(int value);
	void inorder();
	void preorder();
	void postorder();

};

BST::BST() { head = nullptr; }
BST::~BST() { while (!head) remove(head->getdata()); }
bool BST::insert(int value) {
	if (head == nullptr) return (head = new Node(value));
	else {
		Node* newLocation = findLocation(value, head);
		*newLocation > value ? newLocation->setleftPtr(new Node(value)) : newLocation->setrightPtr(new Node(value));
		return true;
	}
	return false;
}
bool BST::remove(int value) {
	Node* toDelete = find(value, head);
	if (!toDelete) return false;

}
bool BST::find(int value) {
	return find(value, head);
}
void BST::inorder() {
	inorder(head);
}
void BST::preorder() {
	preorder(head);
}
void BST::postorder() {
	postorder(head);
}
Node* BST::find(int value, Node* tree) {
	if (!tree) return nullptr;
	if (tree->getdata() == value) return tree;
	find(value, value > tree->getdata() ? tree->getrightPtr() : tree->getleftPtr());
}
Node* BST::findLocation(int value, Node* tree) {
	if ((*tree > value || *tree < value)&&(*tree > value ? tree->getleftPtr() : tree->getrightPtr())==nullptr) return tree;
	findLocation(value, *tree > value ? tree->getleftPtr() : tree->getrightPtr());
}
void BST::inorder(Node* tree) {
	if (!tree) return ;
	inorder(tree->getleftPtr());
	std::cout << tree->getdata() << " ";
	inorder(tree->getrightPtr());
}
void BST::preorder(Node* tree) {
	if (!tree) return ;
	std::cout << tree->getdata() << " ";
	preorder(tree->getleftPtr());
	preorder(tree->getrightPtr());
}
void BST::postorder(Node* tree) {
	if (!tree) return ;
	postorder(tree->getleftPtr());
	postorder(tree->getrightPtr());
	std::cout << tree->getdata() << " ";
}
Node* BST::findParent(int value, Node* tree) {
	if (!tree->getleftPtr() || !tree->getrightPtr()) return nullptr;
	else if (*tree->getleftPtr() == value || *tree->getrightPtr() == value) return tree;
	findParent(value, *tree > value ? tree->getleftPtr() : tree->getrightPtr());
}
Node* BST::findGreatest(Node* tree) {
	if (!tree->getrightPtr()) return tree;
	findGreatest(tree->getrightPtr());
}


