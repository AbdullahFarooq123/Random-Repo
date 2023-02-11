#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

main ()
{//************************************************************************************Variable decleration*****************************************************
	double calories , fat_grams , fat_calories , total_calories , y ;
	
	a:
	
	cout << "Please enter total number of calories : " ;
	
	if ( ! ( cin >> calories ) )
	{
		cin.clear () ; 
		cin.ignore (INT_MAX , '\n' ) ;
		cout << "Please enter an integer!! " ; 
		getch() ;
		system("CLS") ;
		goto a ;
	}
	
	if ( calories < 0 )
	{
		cout << "No negative values please!! " ;
		getch() ;
		system("CLS") ;
		goto a ;
	} 
	
	b:
	
	cout << "Please enter fat grams in food : " ;
	
	if ( ! ( cin >> fat_grams ) )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter an integer!! " ;
		getch();
		system("CLS") ;
		goto b ;
	}
	
	if ( fat_grams < 0 )
	
	{
		cout << "No negative values please!! " ;
		getch() ;
		system("CLS") ;
		goto b;
	}
	
	if ( fat_grams > calories )
	{
		cout << "Either the calories or the fat grams were incorrectly entered!! " ;
		getch() ;
		system("CLS") ;
		goto a;
	} 
	system("CLS") ;
	
	fat_calories = fat_grams * 9 ;
	total_calories = fat_calories / calories ;
	y = total_calories * 30 / 100 ;
	
	if ( calories < y )
	{
		cout << "Food is low in fat!!" ;
	}
	
	cout << "Total calories in food are " << total_calories << " calories. ";
	
	getch();
	
	
	
}
	
	
