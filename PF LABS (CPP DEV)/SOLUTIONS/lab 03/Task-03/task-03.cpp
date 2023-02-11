#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

main ()
{//************************************************************************************Variable decleration*****************************************************
	double BMI , weight , height ;
//*************************************************************************************Inputs and Outputs*******************************************************	
	a:	
	cout << "Please enter weight in pounds : " ;
	if (!(cin >> weight))          													//Condition for if user enters a character
	{
		cin.clear() ;
		cin.ignore(INT_MAX ,'\n') ;
		cout << "Please enter an integer!! " ;
		getch();
		system("CLS") ;
		goto a ;
	}
	
	b:
	cout << "Please enter height in inches : " ;
	if (! ( cin >> height ) )												//Condition for if user enters a character
	{
		cin.clear () ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter an interger!! " ;
		getch() ;
		system ( "CLS" ) ;
		goto b ;
	}
	
	system ( "CLS" ) ;
	
	BMI = weight * 706 / pow ( height , 2 ) ; 						//Calculations
	
	if ( BMI < 18.5 )											  //1 st Condition for output
	{
		cout <<"BMI is : " << BMI << endl ;
		cout << "well!! You are underweight" ;
	}
		
	else if  ( BMI >=18.5 && BMI <= 25 )					//2nd  Condition for output
	{
		cout <<"BMI is : " << BMI << endl ;
		cout << "Good! You are healthy weight" ;
	}
	
	else if (BMI > 25)									//3 rd condition for output
	{
		cout <<"BMI is : " << BMI << endl ;
		cout << "ohh my god!! You are overweight" ;
	}
	getch () ;										//wait till user presses any key
	
}
