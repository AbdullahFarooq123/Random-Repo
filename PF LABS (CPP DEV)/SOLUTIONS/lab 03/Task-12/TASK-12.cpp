#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

main ()
{//************************************************************************************Variable decleration*****************************************************

	long long int number , num , remainder , digits = 0 , z , i = 0 ;
	
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
	
	b:
	if ( number != 0)
	{
		remainder = number % 10 ;
		digits = ( digits ) + ( remainder * pow ( 2 , i ) ) ;
		number /= 10 ;
		++i;
		goto b ;
	}
	system ("CLS") ;
	
	cout << "Decimal number is " << digits ;
}
