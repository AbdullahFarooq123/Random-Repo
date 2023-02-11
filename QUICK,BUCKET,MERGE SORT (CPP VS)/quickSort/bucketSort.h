#pragma once
#include<iostream>
class bucketSort {
public:
	void BucketSort(int* array, int size) {
		int max = findMax(array, size);
		for (int position = 1; max / position > 0; position *= 10)
			countSort(array, size, position);
	}
private:
	void countSort(int* array, int size, int position) {
		int countArray[10] = { 0 };
		for (int i = 0; i < size; i++)
			++countArray[array[i] / position % 10];
		for (int i = 1; i < 10; i++)
			countArray[i] += countArray[i - 1];
		int* tempArray = new int[size];
		for (int i = size-1; i >= 0; i--) {
			int value = array[i];
			int countArrayIndex = value / position % 10;
			int tempArrayIndex = --countArray[countArrayIndex];
			tempArray[tempArrayIndex] = array[i];
		}
		for (int i = 0; i < size; i++)
			std::cout << (array[i] = tempArray[i]) << " ";
		delete[]tempArray;
	}
	int findMax(int* array, int size) {
		int max = array[0];
		for (int i = 0; i < size; i++)
			if (max < array[i])
				max = array[i];
		return max;
	}
};
