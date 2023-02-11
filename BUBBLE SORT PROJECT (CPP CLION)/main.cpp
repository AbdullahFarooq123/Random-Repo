#include <iostream>
using namespace std ;
class test{
public:
void bubbleSort(int *array,int size){
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size -1 ; j++ ){
            if(array[j]>array[j+1])
                swap(&array[j],&array[j+1]);
        }
    }
}
void swap(int *value1,int *value2){
    int tempValue = *value1;
    *value1=*value2;
    *value2=tempValue;
}
};
int main() {
    int array[]={3,2,1};
    test a;
    a.bubbleSort(array,3);
    for(int a : array)
        cout << a <<" ";
}
