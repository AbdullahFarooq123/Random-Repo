#include<iostream>
#include<conio.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    int in, out;
    for(out=1;out<n;out++)
    {
        int key=arr[out];
        in=out;
        while(in>0 && arr[in-1]>key)
        {
             arr[in]=arr[in-1];
             --in;
        }
        
        arr[in]=key;
    }
}
void print_array(int arr[], int n)
{
    for(int x=0;x<n;x++)
    {
        cout<<arr[x]<<endl;
    }
}
int main()
{
    int arr[]={23,4,12,21,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, n);
    cout<<"Shorted array is:\n";
    print_array(arr, n);
    return 0;
}
