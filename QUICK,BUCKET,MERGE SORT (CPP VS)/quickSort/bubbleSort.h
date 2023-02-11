#pragma once
#include<iostream>
class bubbleSort {
private:
	void swap(int& value_1, int& value_2) {
		int temp = value_1;
		value_1 = value_2;
		value_2 = temp;
	}
	void bubbleUp(int* array, int firstIndex, int lastIndex) {
		for (;firstIndex < lastIndex;firstIndex++)
			if (array[firstIndex] > array[lastIndex])
				swap(array[firstIndex], array[lastIndex]);
		for (int i = 0; i < 7; i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;
	}
public:
	void BubbleSort(int *array, int firstIndex, int lastIndex) {
		if (firstIndex < lastIndex) {
			bubbleUp(array, firstIndex, lastIndex);
			BubbleSort(array, firstIndex, --lastIndex);
		}
	}
};
