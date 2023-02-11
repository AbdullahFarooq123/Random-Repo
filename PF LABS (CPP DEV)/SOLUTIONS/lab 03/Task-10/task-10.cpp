#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

main ()
{//************************************************************************************Variable decleration*****************************************************

	int account_no ;
	double balance , charges , credits , credit_limits , new_balance ;
	
	a:
	cout << "Please enter account no : " ;
	
	while ( ! ( cin >> account_no ) || account_no <= 0 )
	{
		cin.clear () ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter a positive integer!! or avoid any characters " ;
		getch () ;
		system ( "CLS" ) ;
		goto a ;
	}
	
	b:
	cout << "Please enter your balance at month's begining : " ;
	
	while  ( ! ( cin >> balance ) || balance < 0 )
	{
		cin.clear () ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter a positive integer!! or avoid any characters " ;
		getch () ;
		system ( "CLS" ) ;
		goto b ;
	}
	
	c:
	cout << "Please enter your charges : " ;
	
	while  ( ! ( cin >> charges ) || charges < 0 )
	{
		cin.clear () ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter a positive integer!! or avoid any characters " ;
		getch () ;
		system ( "CLS" ) ;
		goto c ;
	}
	
	d:
	cout << "Please enter the credits applied : " ;
	
	while  ( ! ( cin >> credits ) || credits < 0 )
	{
		cin.clear () ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter a positive integer!! or avoid any characters " ;
		getch () ;
		system ( "CLS" ) ;
		goto d ;
	}
	
	e:
	cout << "Please enter the allowed credits : " ;
	
	while  ( ! ( cin >> credit_limits ) || credit_limits < 0 )
	{
		cin.clear () ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter a positive integer!! or avoid any characters " ;
		getch () ;
		system ( "CLS" ) ;
		goto e ;
	}
	
	system ( "CLS" ) ;
	
	new_balance = balance + charges - credits ;
	
	if ( new_balance < credit_limits )
	{
	cout << "Your new balance is " << new_balance << " Rs " << endl ;
	}
	
	else
	
	{
		cout << "Your account no is : " << account_no << endl ;
		cout << "Your credit limit is : " << credit_limits << " Rs " << endl ;
		cout << "Your new balance is : " << new_balance << " Rs " << endl ;
		cout << "Credit limit exceded!" << endl ;
	}
	
	cout << endl << endl ;
	system ( "pause" ) ;
	return 0 ;
	
	}
	
	
