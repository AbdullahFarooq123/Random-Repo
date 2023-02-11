#include<iostream>
#include"quickSort.h"
#include"bubbleSort.h"
#include"mergeSort.h"
#include"bucketSort.h"
using namespace std;
int main() {
	bubbleSort Sort;
	int array[] = { 12, 9, 5, 20, 16, 18, 10 };
	Sort.BubbleSort(array, 0,sizeof(array) / sizeof(array[0])-1);
	cout << endl;
	for (int i : array) cout << i << " ";
}