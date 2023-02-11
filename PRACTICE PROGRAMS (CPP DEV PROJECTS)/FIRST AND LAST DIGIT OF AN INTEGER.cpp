#include<iostream>
#include<cmath>
#include<conio.h>
# define pi 3.14
using namespace std;
main()
{
 	int num , remainder , digits , quotients , last_digit , first_digit ;
 	cout << "Please enter a number : " ;
	  
	cin >> num ;
	last_digit = num % 10 ;
	
	 while ( num >= 10 )
 	{
 		num = num / 10 ;
		  
	}
	cout << "Last digit is : " << last_digit << endl ;
	cout << "First digit is : " << num ;
}
	
