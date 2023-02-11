#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()

{
	string month_1 , month_2 , month_3 ;
	int rainfall_1 , rainfall_2 , rainfall_3 ;
	float average ;
	
	cout << "Please enter name of 1st month : " ;
	cin >> month_1 ;
	
	system ("CLS") ;
	
	cout << "Please enter rainfall (in mm) in " << month_1 << " : " ;
	cin >> rainfall_1 ;
	
	system ("CLS") ;
	
	cout << "Please enter name of 2nd month : " ;
	cin >> month_2 ;
	
	system ("CLS") ;
	
	cout << "Please enter rainfall (in mm) in " << month_2 << " : " ;
	cin >> rainfall_2 ;
	
	system ("CLS") ;
	
	cout << "Please enter name of 3rd month : " ;
	cin >> month_3 ;
	
	system ("CLS") ;
	
	cout << "Please enter rainfall (in mm) in " << month_3 << " : " ;
	cin >> rainfall_3 ;
	
	average = ( rainfall_1 + rainfall_2 + rainfall_3 ) / 3 ;
	
	system ("CLS") ;
	
	cout << "The average rainfall in " << month_1 << ", " << month_2 << " and " << month_3 << " is : " << average << " mm" ;
	
	getch() ;
	
	return 0 ;
}
	
