#pragma once

#include<iostream>
#include"node.h"

using namespace std;


class linkedlist {

private:
    node* start; //this pointer always points towards the first node in the linked list
    node* last;  //this pointer always points towards the last node in the linked list

public:

    linkedlist() {
        //set the start and last to null and size to zero
        start = NULL;
        last = NULL;
    }

    bool insert(int value) {
        //create new node on heap with the provided value
        //insert this node at the end of the linked list
        if (start == NULL) {
            start = new node(value);
            last = start;
        }
        else {
            last->setptr(new node(value));
            last = last->getptr();
        }
        return true;
    }


    bool find(int key) {
        node* tempNode = start;
        while (tempNode != NULL) {
            if (tempNode->getdata() == key) return true;
            tempNode = tempNode->getptr();
        }
        return false;
    }

    void display() {
        node* tempNode = start;
        while (tempNode != NULL) {
            cout << tempNode->getdata() << ' ';
            tempNode = tempNode->getptr();
        }
    }

    int get(int index) {
        int i = 0;
        node* tempNode = start;
        while (tempNode !=NULL) {
            if (i++ == index) return tempNode->getdata();
            tempNode = tempNode->getptr();
        }
        return 0;
    }

    bool removeat(int index) {
        node* afterNode, * beforeNode;
        beforeNode = start;
        afterNode = beforeNode->getptr();
        if (index == 0) {
            start = start->getptr();
            delete beforeNode;
        }
        int i = 1;
        while (afterNode != ) {
            if (i == index) {
                beforeNode->setptr(afterNode->getptr());
                delete afterNode;
                return true;
            }
            beforeNode = afterNode;
            afterNode = afterNode->getptr();
            i++;
        }
        return false;
    }

    bool remove(int value) {
        node* tempNode = start;
        int i = 0;
        while (!isEmpty()) {
            if (tempNode->getdata() == value) return removeat(i++);
            tempNode = tempNode->getptr();
        }
    }

    bool remove(int value, int occurance) {
        node* tempNode = start;
        int i = 0, index = 0;
        while (!isEmpty()) {

            if (tempNode->getdata() == value) {
                i++;
                if (i == occurance) {
                    removeat(index);
                    return true;
                }
            }
            tempNode = tempNode->getptr();
            index++;
        }
        return false;
    }

    bool isEmpty() {
        return start == NULL;
    }

    int size() {
        int i = 0;
        node* tempNode = start;
        while (tempNode != NULL) {
            i++;
            tempNode = tempNode->getptr();
        }
        return i;
    }

    ~linkedlist() {
        node* after, * temp;
        tempNode = start;
        while (tempNode != NULL) {
            after = temp->getptr();
            delete temp;
            temp = after;
        }
    }

protected:
    bool insert(int value, int index) {
        int i = 0;
        node* tempNode = start;
        while (!isEmpty()) {
            if (i == index) {
                node* newNode = new node(value);
                newNode->setptr(tempNode->getptr());
                tempNode->setptr(newNode);
                return true;
            }
            i++;
            tempNode = tempNode->getptr();
        }
        return false;
    }

};

