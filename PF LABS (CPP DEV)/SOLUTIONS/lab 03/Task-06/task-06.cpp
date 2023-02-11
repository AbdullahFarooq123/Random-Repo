#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

main ()
{//************************************************************************************Variable decleration*****************************************************
	double charge , check_fee , balance , check , y , remaining ;
	
	a:
	cout << "Please enter your balance : " ;
	if ( ! ( cin >> balance ) ) 
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter an integer value !! " ;
		getch() ;
		system ("CLS") ;
		goto a ; 
	} 
	if ( balance < 0 )
	{
		cout << "Your account is overdrawn" ;
		getch() ;
		system ("CLS") ;
		goto a ; 
	}
	
	if ( balance < 1500 )
	{
		y = 100 ;
	}
	
	b:
	cout << "Please enter number of checks written : " ;
	if ( ! ( cin >> check ) )
	{
		cin.clear () ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integer value!! " ;
		getch () ;
		system ("CLS") ;
		goto b ; 
	}
	if ( check < 0)
	{
		cout << "Checks written cannot be less than 0 !! " ;
		getch () ;
		system ("CLS") ;
		goto b ; 
	}
	
	
	if ( check < 20 )
	{
		check_fee = 10 * check ;
	}
	
	else if  ( check >= 20 || check <= 39 )
	{
		check_fee = 8 * check ;
	}
	
	else if ( check >= 40 || check <= 59 )
	{
		check_fee = 6 * check ;
	}
	
	else if ( check >= 60 )
	{
		check_fee = 4 * check ;
	}
	
	charge = check_fee + 50 + y ;
	remaining = balance - charge ;
	system("CLS") ;
	
	cout << "Your monthly charge is : " << charge << " Rs. " ;
	if ( remaining < 0)
	{
		cout << "\nYour remaining balance is!! " << remaining << " Rs. " ;
		cout << "\nAccount overdrawn!! " ;
	}
	else 
	{
		cout << "\nYour remaining balance is " << remaining << " Rs. " ;
	}
	getch() ;

}

	
