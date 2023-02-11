//***************************************************************Libraries**************************************************************************************
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>

using namespace std ;
 
main()

{
//***************************************************************Variable Decleration*****************************************************************************
double length_1 , width_1 , length_2 , width_2 , area_1 , area_2 ;
char b ;
//***************************************************************Inputs and outputs*******************************************************************************

	a:
	cout << "Please enter length of first rectangle : " ;

	if ( !(cin>>length_1) )											//Conditon for if user enters a character
	{
		cin.clear ( ) ; 
    	cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter integer value!! " ;
		getch();
    	system ( "CLS" ) ;
		goto a ;
	}


	b:
	cout << "Please enter width of first rectangle : " ;

	if ( !(cin>>width_1) )											//Conditon for if user enters a character
	{
		cin.clear ( ) ; 
    	cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter integer value!! " ;
		getch();
		system ( "CLS" ) ;
		goto b ; 
	}

	c:
	cout << "Please enter length of second rectangle : " ;

	if ( !(cin>>length_2) )											//Conditon for if user enters a character
	{
		cin.clear ( ) ; 
    	cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter integer value!! " ;
		getch();
		system ( "CLS" ) ;
		goto c ; 
	}


	d:
	cout << "Please enter width of second rectangle : " ;

	if ( !(cin>>width_2) )												//Conditon for if user enters a character
	{
		cin.clear ( ) ; 
    	cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter integer value!! " ;
		getch();
		system ( "CLS" ) ;
		goto d ; 
	}


	system ("CLS") ;
//***************************************************************Calculations**************************************************************************************
	area_1 = length_1 * width_1 ;
	area_2 = length_2 * width_2 ;
//***************************************************************Output conditions********************************************************************************
	if ( area_1 > area_2 )
	{
		cout << "Area of 1st rectangle is greater than 2nd one.." << endl ;
	}

	else if ( area_2 > area_1 )
	{
	cout << "Area of 2nd rectangle is greater than 1st one.." << endl ;
	}

	else 
	{
		cout << "Area of both triangles is equal.." << endl ;
	}
	
	system ("pause") ;
	return 0 ;
}

