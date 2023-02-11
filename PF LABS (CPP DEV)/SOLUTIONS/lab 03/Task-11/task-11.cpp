#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

main ()
{//************************************************************************************Variable decleration*****************************************************

	long long int number , num , remainder , digits = 0 , z , i ;
	
	a:
	cout << "Please enter a number : " ;
	
	if ( ! ( cin >> number ) )
	{
		cin.clear () ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Error !! Please enter an integral value. " ;
		getch () ;
		system ("CLS") ;
		goto a ;
	}
	
	num = number ;
	
	b:
	if ( number != 0)
	{
		remainder = number % 10 ;
		digits = ( digits * 10 ) + remainder ;
		number /= 10 ;
		goto b ;
	}
	system ("CLS") ;
	
	cout << "The number in backward is " << digits << endl ;
	
	if ( digits == num )
	{
		cout << "number is palindrome!! " << endl ;
	}
	
	else
	{
		cout << "number is not palindrome!! " << endl ;
	}
	system ("pause") ;
}
