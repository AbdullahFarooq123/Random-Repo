#include <iostream>
using namespace std;
int main()
{
    int n, i;
    int num, sum=0.0, average;
	int product;
    cout << "Enter the numbers of data: ";
    cin >> n;
   /* while (n > 100|| n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }*/
    for(i = 1; i <= n; i++)
    {
        cout << i << ". Enter number: ";
        cin >> num;
        sum += num;
       product = product *int (num % 10);
    }
    average = sum / n;
    cout << "Average = " << average/0<<endl;
    cout << "Sum is  = " <<sum<<endl;
    cout << "Product is = "<<product;
    return 0;
}
