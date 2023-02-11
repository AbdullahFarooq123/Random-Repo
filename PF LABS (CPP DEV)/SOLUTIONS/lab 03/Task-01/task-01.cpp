//***************************************************************Libraries**************************************************************************************
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>

using namespace std ;

main()

{
//**************************************************************Variable Decleration****************************************************************************
	int day , month , year ;
	char b ;
//**************************************************************Inputs and Outputs******************************************************************************
	a:
	cout << "Please enter date in the format \"mm dd yyyy\" (with space in between) : " ;

	if ( ! ( cin >> month ) )																	//Conditon for if user enters a character
	{
		cin.clear() ;
		cin.ignore(INT_MAX , '\n') ;
		cout << "No character please!!" ;
		getch();
		system("CLS") ;
		goto a ;
	}

	if ( month > 12 || month <= 0 )															//Condition for if user enters month greater than 12 or less than 1
	{
		cout << "Month cannot be greater than 12 or less than 0 " ;
		getch () ;
		system ( "CLS" ) ;
		goto a ;
	}


		if ( ! ( cin >> day ) )															  //Conditon for if user enters a character
	{
		cin.clear() ;
		cin.ignore(INT_MAX , '\n') ;
		cout << "No character please!!" ;
		getch();
		system("CLS") ;
		goto a ;
	}

	if ( day > 30 || day < 1 )															//Condition for if user enters date greater than 30 or less than 1
	{
		cout << "Day cannot be greater than 30 " ;
		getch () ;
		system ("CLS") ;
		goto a ;
	}


	if ( ! ( cin >> year ) )															//Conditon for if user enters a character
	{
		cin.clear() ;
		cin.ignore(INT_MAX , '\n') ;
		cout << "No character please!!" ;
		getch();
		system("CLS") ;
		goto a ;
	}

	system ( "CLS" ) ;																	//screen clearing

	if ( day * month == year )														   //Magical date condition
	{
		cout << setfill ( '0' ) << setw ( 2 ) << month << "/" << day << "/" ;
		cout << year << endl ;
		cout << "Date is magical" << endl ;
	}

	else 																			//Not magical date condition
	{
		cout << fixed << setfill ( '0' ) << setw ( 2 ) << month << "/" << day << "/" ;
		cout << year << endl ;
		cout << "Date is not magical " << endl ;
	}

	system ("pause") ;

	return 0 ;



}
