#include <iostream>

using namespace std;

int main()
{
    int arr[100], n, i;
    cout<<"Enter the size of array to insert integer elements: "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\nEven elements of array"<<endl;
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        cout<<arr[i]<<" "<<endl;
    }
}
