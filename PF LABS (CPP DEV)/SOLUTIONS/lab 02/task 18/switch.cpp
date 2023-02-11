#include<iostream>
#include <chrono>
using namespace std;
int main()
{
	char age[2];
	cout<<"Enter age:";
	cin>>age[1];
	switch(age[2])
	{
		case 0 ... 19:
			
		cout<<"teen";
		_sleep(10000);
		break;
		case 20 ... 30:
			cout<<"adult";
			break;
		default:
			cout<<"nothing";
			
	}
}
