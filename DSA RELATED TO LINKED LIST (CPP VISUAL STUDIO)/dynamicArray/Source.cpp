#include<iostream>
#include "ringQueue.h"
using namespace std;
int main() {
	//cout << bracketsValidity("C:\\Users\\Abdullah123\\Desktop\\abc.txt").bracketIsGood();
	dynamicArray<int> a = dynamicArray<int>();
	ringQueue<int> queue = ringQueue<int>();
	cout << queue.push(1);
	cout << queue.push(2);
	cout << queue.push(2);
	cout << queue.isFull();
	cout << queue.pop();
	cout << queue.size();
	cout << queue.push(10);
	cout << queue.size();
	cout << queue.isEmpty();
	cout << queue.pop();
	cout << queue.pop();
	cout << queue.size();
	cout << queue.isEmpty();
	cout << queue.isFull();
	cout << queue.pop();
	cout << queue.size();
	cout << queue.isEmpty();
	cout << queue.isFull();
	cout << queue.length();
}