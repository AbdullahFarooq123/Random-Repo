#include "Array.h"
#include <iostream>
using namespace std;
void printIndex(int);
void printArray(Array&);
int main() {
	cout << "====================TEST ON CLASS====================\n";
	Array A;
	cout << "-----INSERTION-----\n";
	cout << "Insert last (20) : " << A.insertLast(20) << "\n";
	cout << "Insert first (30) : " << A.insertFirst(30) << "\n";
	cout << "Insert at 2 (0) : " << A.insertAt(0, 2) << "\n";
	cout << "Insert after 1 (2) : " << A.insertAfter(2, 1) << "\n";
	cout << "Insert before 1 (100) : " << A.insertBefore(100, 1) << "\n";
	cout << "-----AFTER INSERTION-----\n";
	printArray(A);
	cout << "\n-----SEARCHING-----\n";
	cout << "Sequential Search (20) [Index no] : ";
	printIndex(A.seqSearch(20));
	cout << "Search from 3 (30) [Index no] : ";
	printIndex(A.searchFrom(30, 3));
	cout << "Search all (2) [Indexes] : ";
	Array tempArray;
	A.searchAll(2, tempArray);
	if (tempArray.getLength())
		printArray(tempArray);
	else
		cout << "No value!";
	cout << "\n-----COUNT OF A KEY-----\n";
	cout << "Count of (0) : " << A.countKey(0);
	cout << "\n-----SEARCH SMALLER-----\n";
	cout << "Smaller than 2 [Value] : ";
	int small;
	switch (A.searchSmaller(2, &small)) {
	case true:
		cout << small;
		break;
	case false:
		cout << "No smaller value!";
	}
	cout << "\n-----SEARCH AND UPDATE-----\n";
	cout << "Search and update (30 to 150) : ";
	int index;
	switch (A.searchAndUpdate(30, 150, &index)) {
	case true:
		cout << "Updated Index : " << index;
		break;
	case false:
		cout << "Value not found!";
	}
	cout << "\nSearch and update all (100 to 200) : ";
	Array B;
	switch (A.searchAndUpdateAll(100, 200, B)) {
	case true:
		cout << "Indexes : ";
		printArray(B);
		break;
	case false:
		cout << "No value found!";
	}
	cout << "\nAfter update : ";
	printArray(A);
	cout << "\n-----SEARCH AND DELETE-----\n";
	cout << "Delete 200 : " << (A.searchAndDelete(200) ? "Value deleted" : "Value not found!");
	cout << "\nDelete all (150) : " << (A.searchAndDeleteAll(150) ? "Values deleted" : "Values not found!");
	cout << "\nAfter delete : ";
	printArray(A);
	cout << "\n-----COMMON VALUES-----\n";
	cout << "Common (A , A) : ";
	Array C = A.findCommon(A, A);
	printArray(C);
	cout << "\n-----SIMILARITY-----\n";
	cout << "Similarity with A : " << A.Similarity(A) << "%\n";
	cout << "\n-----MEDIAN-----\n";
	cout << "Median [value] : " << A.Median();
	cout << "\n-----MODE-----\n";
	int mode;
	cout << "Mode [value] : ";
	switch (A.Mode(&mode)) {
	case true:
		cout << mode;
		break;
	case false:
		cout << "No mode!";
	}
	cout << "\n-----SORTING-----\n";
	A.bSort();
	A.selSort();
	A.inSort();
	cout << "After sorting : ";
	printArray(A);
	cout << "\n====================END TEST====================";
}
void printIndex(int value) {
	switch (value) {
	case -1:
		cout << "No value!\n";
		break;
	default:
		cout << value << "\n";
	}
}
void printArray(Array& A) {
	for (int i : A)
		cout << i << "\t";
}

