#pragma once
class quickSort {
private:
	void swap(int& value_1, int& value_2) {
		int temp = value_1;
		value_1 = value_2;
		value_2 = temp;
	}
	int partition(int* array, int firstIndex, int lastIndex) {
		int selectedValue = array[firstIndex];
		int startIndex = firstIndex + 1;
		while (startIndex <= lastIndex) {
			if (selectedValue >= array[startIndex]) startIndex++;
			else if (selectedValue < array[lastIndex]) lastIndex--;
			else swap(array[lastIndex], array[startIndex]);
		} 
		swap(array[firstIndex], array[lastIndex]);
		return lastIndex;
	}
public:
	void QuickSort(int* array, int firstIndex, int lastIndex) {
		if (firstIndex < lastIndex) {
			int selectedIndex = partition(array, firstIndex, lastIndex);
			QuickSort(array, firstIndex, selectedIndex - 1);
			QuickSort(array, selectedIndex + 1, lastIndex);
		}
	}
};

