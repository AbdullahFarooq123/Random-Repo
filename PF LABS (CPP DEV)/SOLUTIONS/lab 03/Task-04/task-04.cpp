#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

main ()
{//************************************************************************************Variable decleration*****************************************************

	double weight , mass ;
//*************************************************************************************Input and Outputs********************************************************	
	a:
	cout << "Please enter mass (in Kg) : " ;
	if (!(cin >> mass))      																 //Condition for if the user accidently enters a character
	{
		cin.clear();
		cin.ignore(INT_MAX , '\n') ;
		cout << "Mass cannot be a character!! " ;
		getch() ;
		system ( "CLS" ) ;
		goto a ;
	}
//*************************************************************************************Calculations*************************************************************
	weight = mass * 9.8 ;
	
	system ( "CLS" ) ;																//To clear the screen after user inputs the data
	
	if ( weight > 1000 )														 //1 st output condition
	{
		cout << "The weight is " << weight << " N and it is too heavy! " ;
	}
	
	else 																	//2 nd output condition
	{
		cout << "The weight is " << weight << " N and its too light! " ;
	}
	
	getch();															//To weight till user presses any key
}
