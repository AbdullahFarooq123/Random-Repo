#include <stdlib.h>
#include <conio.h>
#include <iostream>

using namespace std;

main()
{
	//************************************************************************VARIABLE DECLERATION************************************************************
	double game_1 , game_2 , game_3 , average ;
	//***********************************************************************INPUTS**************************************************************************
	cout << "Please enter score for first game : " ;
	cin >> game_1 ;
	
	cout << "Please enter score for second game : " ;
	cin >> game_2 ;
	
	cout << "Please enter score for third game : " ;
	cin >> game_3 ;
	//************************************************************************CALCULATIONS********************************************************************
	average = ( game_1 + game_2 + game_3 ) / 3 ;

	system ("CLS") ;
	//************************************************************************OUTPUT**************************************************************************
	cout << "The average score for 3 games is : " << average ;

	getch() ;
	
	return 0 ;
}
