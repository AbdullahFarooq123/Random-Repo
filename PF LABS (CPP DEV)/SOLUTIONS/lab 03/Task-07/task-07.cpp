#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

main ()
{//************************************************************************************Variable decleration*****************************************************
	double weight , distance , charge , x , y;
	
	a:
	cout << "Please enter your luggage weight : " ;
	if ( ! ( cin >> weight ) )															//Condition for if the user accidently writes a character
	{
		cin.clear();
		cin.ignore(INT_MAX , '\n');
		cout << "Please enter an integer value!! " ;
		getch();
		system("CLS");
		goto a ;
	}
	
	if ( weight < 0 )															//Max weight condition
	{
		cout << "sorry!! weight under limit!! " ;
		getch();
		system("CLS");
		goto a ;
	}
	
	else if ( weight > 20 )												//Min weight condition
	{
		cout << "warning!! weight limit exceded!!";
		getch();
		system("CLS");
		goto a ;
	}
	
	b:
	cout << "Please enter the distance you want your luggage to be carried : " ;
	if ( ! ( cin >> distance ) ) 												//Condition for if the user accidently enters a character
	{
		cin.clear();
		cin.ignore(INT_MAX , '\n');
		cout << "Please enter an integer value!! " ;
		getch();
		system("CLS");
		goto b ;
	} 
	
	if ( distance < 20 )												//Min distance condition
	{
		cout << "sorry!! its too near you can use something else to carry the weight. " ;
		getch();
		system("CLS");
		goto b ;
	}
	
	else if ( distance > 3000 )									//Max distance condition
	{
		cout << "Distance is too much. Ship cannot carry your luggage to " << distance << " Km.";
		getch();
		system("CLS");
		goto b ;
	}
//******************************************************************************Charges conditions**************************************************************	
	if ( weight <= 2 )
	{
		y = ( distance / 500 ) * 50 ;
	}
	
	else if ( weight > 2 || weight <=6)
	{
		y = ( distance / 500 ) * 100 ;
	}
	
	else if ( weight > 6 || weight <= 10 )
	{
		y = ( distance / 500 ) * 150 ;
	}
	
	else if ( weight > 10 || weight <= 20 )
	{
		y = ( distance / 500 ) * 200 ;
	}
	system ("CLS") ;
//*********************************************************Final output*****************************************************************************************	
	cout << "Your total charges are " << y << " Rs." ;
	
	getch() ;
}
	
