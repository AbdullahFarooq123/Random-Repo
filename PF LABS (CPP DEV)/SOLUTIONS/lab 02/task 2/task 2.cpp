#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

main()
{
	//*************************************************************VARIABLE DECLERATION*********************************************************************
	double maximum_credit , available_credit , used_credit ;
	//*************************************************************INPUTS***********************************************************************************
	cout << "Please enter your \"MAXIMUM CREDIT\" ammount (in Rs) : " ;
	cin >> maximum_credit ;
	
	cout << "Please enter your \"CREDIT USED\" ammount (in Rs) : " ;
	cin >> used_credit ;
	//*************************************************************CALCULATIONS*****************************************************************************
	available_credit = maximum_credit - used_credit ;
	
	system ("CLS") ;
	//*************************************************************OUTPUT***********************************************************************************
	cout << "Your \"AVAILABLE CREDIT\" now (in Rs) is : " << available_credit ;

	getch ();
	
	return 0 ;
}

