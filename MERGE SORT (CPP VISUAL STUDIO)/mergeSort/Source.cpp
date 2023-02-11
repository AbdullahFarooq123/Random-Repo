#include<iostream>
void mergeSort(int*,int,int);
void merge(int*,int,int,int,int);
int main() {
	int array[4] = { 10,3,9,0 };
	mergeSort(array, 0, 3);
	for (int i : array) std::cout << i << " ";
}
void mergeSort(int* array, int firstIndex, int lastIndex) {
	if (firstIndex < lastIndex) {
		int mid_of_array = (firstIndex + lastIndex) / 2;
		mergeSort(array, firstIndex, mid_of_array);
		mergeSort(array, mid_of_array + 1, lastIndex);
		merge(array, firstIndex, mid_of_array, mid_of_array + 1, lastIndex);
	}
}
void merge(int* array, int firstIndex, int mid_of_array, int after_mid, int lastIndex) {
	int no_of_elements_in_firstHalf = (mid_of_array - firstIndex) + 1;
	int no_of_elements_in_secondHalf = (lastIndex - after_mid) + 1;
	int* second_array = new int[no_of_elements_in_firstHalf + no_of_elements_in_secondHalf];
	int index_of_second_array = 0;
	int i = firstIndex;
	int j = after_mid;
	while (i <= mid_of_array && j <= lastIndex) {
		if (array[i] > array[j]) {
			second_array[index_of_second_array] = array[j];
			index_of_second_array++;
			j++;
		}
		else {
			second_array[index_of_second_array] = array[i];
			i++;
			index_of_second_array++;
		}
	}
	while (i <= mid_of_array) {
		second_array[index_of_second_array] = array[i];
		index_of_second_array++;
		i++;
	}
	while (j <= lastIndex) {
		second_array[index_of_second_array] = array[j];
		index_of_second_array++;
		j++;
	}
	for (int i = 0; i < (no_of_elements_in_firstHalf + no_of_elements_in_secondHalf); i++) {
		array[firstIndex] = second_array[i];
		firstIndex++;
	}
	delete[] second_array;
}