#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

main ()
{//************************************************************************************Variable decleration*****************************************************
	double seconds , mins , hours , days ; 
	
	a:
	cout << "Please enter number of seconds : " ;
	
	if ( ! ( cin >> seconds ) ) 
	{
		cin.clear();
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integer ! " ;
		getch();
		system ( "CLS" ) ;
		goto a ;
	}
	
	mins = ( ( float) 1 / 60 ) * seconds ;
	hours = ( ( float ) 1 / 3600 ) * seconds ;
	days = ( ( float ) 1 / 86400 ) * seconds ;
	
	system ("CLS") ;
	
	if ( seconds >= 60 )
	{
		cout << "No of mins in " << seconds << " seconds is " << mins << " minutes ! " ;
	}
	
	else if ( seconds >= 3600 )
	{
		cout << "No of hours in " << seconds << " seconds is " << hours << " hours ! " ;
	}
	
	else if ( seconds >= 86400 )
	{
		cout << "No of days in " << seconds << " seconds is " << days << " days ! " ;
	}
	
	
}
