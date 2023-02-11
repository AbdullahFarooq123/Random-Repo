#include <iostream>
#include <string>

using namespace std;

int main()
{
	string num;
	
	cout << "Enter number: ";
	cin >> num;
	
int 	x = num.length() - 1 ;


	while (x >= 0 )
	{
		cout << num[x];
		x--;
	}
	return 0;
	
}

