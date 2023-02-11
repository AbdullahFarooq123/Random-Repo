#include <iostream>
using namespace std;
main ()
{
	char age[2] ;
	cout << "Please enter age" ;
	cin >>age ;
	switch (age[2])
	{
		case (age[2]<=16):
			cout << "teen" ;
			break;
			case(age[2] >=35):
				cout << "Elder";
				break;
				default : cout << "invalid";
	}
}
