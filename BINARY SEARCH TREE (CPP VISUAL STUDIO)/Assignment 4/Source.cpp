#include <iostream>
#include "BST.h"

void mergeSort(int*, int, int);
void merge(int*, int, int, int);
using namespace std;
int main() {

    int array[] = { 93, 67, 94, 83, 89, 90, 45, 123, 83, 56, 372, 75, 43, 92, 9, 71, 23 };
    /*BST b;
    for (int i = 0; i < 16; i++)
        b.insert(array[i]);
    b.inorder();
    cout << endl;
    b.preorder();
    cout << endl;
    b.postorder();
    cout << endl;*/
    mergeSort(array, 0, sizeof(array) / sizeof(array[0])-1);
    for (int i : array)
        cout << i << " ";

}

void mergeSort(int* array, int lower, int higher) {

    if (lower < higher) {
        for (int i = lower; i <= higher; i++)
            std::cout << array[i] << " ";
        std::cout << std::endl;
        int midPoint = (lower + higher) / 2;
        mergeSort(array, lower, midPoint);
        mergeSort(array, midPoint + 1, higher);
        merge(array, lower, midPoint, higher);
    }

}

void merge(int* array, int lower, int midPoint, int higher) {

    int mid = midPoint + 1;
    int tempLower = lower;
    int tempHigher = higher;
    int* tempArray = new int[higher - lower + 1];
    int index = 0;
    while (lower <= midPoint && mid <= higher) {
        if (array[lower] > array[mid]) tempArray[index++] = array[mid++];
        else tempArray[index++] = array[lower++];
    }
    while (mid <= higher) tempArray[index++] = array[mid++];
    while (lower <= midPoint) tempArray[index++] = array[lower++];
    for (int i = 0; tempLower <= tempHigher; i++,tempLower++) array[tempLower] = tempArray[i];
    delete []tempArray;

}

