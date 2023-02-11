#include<iostream>
#include "Array.h"
using namespace std;
void flex(Array&);
/*int main() {
	Array flexArray;
	flex(flexArray);
	cout << flexArray.getSize();
}*/
void flex(Array& A) {
	Array C;
	if (A.getLength() * 10 >= 80) {
		C = Array(A.getSize() * 2);
		for (int i = 0; i < A.getLength(); i++)
			C.insertLast(A[i]);
	}
	else if (A.getLength() * 10 <= 35) {
		C = Array(A.getSize() / 2);
		for (int i = 0; i < A.getLength(); i++)
			C.insertLast(A[i]);
	}
	A = C;
}