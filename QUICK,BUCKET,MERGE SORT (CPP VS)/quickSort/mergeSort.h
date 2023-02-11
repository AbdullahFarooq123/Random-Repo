#pragma once
class mergeSort {

private:

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
        for (int i = 0; tempLower <= tempHigher; i++, tempLower++) array[tempLower] = tempArray[i];
        delete[]tempArray;

    }

public:

    void MergeSort(int* array, int lower, int higher) {

        if (lower < higher) {
            int midPoint = (lower + higher) / 2;
            MergeSort(array, lower, midPoint);
            MergeSort(array, midPoint + 1, higher);
            merge(array, lower, midPoint, higher);
        }

    }

};
