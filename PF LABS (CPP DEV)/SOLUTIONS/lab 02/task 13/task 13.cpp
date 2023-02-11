#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	a:
	double ammount , principle , rate , t , interest ;
	
	cout << "Please enter your balance (PRINCIPLE) : " ;
	cin >> principle ;
	system ("CLS") ;
	
	cout << "Please enter rate of interest : " ;
	cin >> rate ;
	system ("CLS") ;
	
	cout << "Please enter the number of times the interest is compounded : " ;
	cin >> t ;
	system ("CLS") ;
	
	ammount = principle * pow ( (1 + (rate / ( t * 100 ) ) ) , t ) ;
	
	interest = ammount * rate / 100 ;
	
	cout << "Interest rate :            " << rate << " % " << endl << endl ;
	cout << "Time compounded :          " << t << endl << endl ;
	cout << "Principle :               " << setw ( 5 ) << principle << " Rs "<< endl << endl ;
	cout << "Interest ammount :         " << setprecision ( 3 ) << setw ( 3 ) << interest << " Rs " << endl << endl ;
	cout << "Ammount in savings :       " << setprecision ( 5 ) << setw ( 5 ) << ammount << " Rs " << endl << endl ; 
	
	getch() ;
	system ("CLS") ;
	goto a ;

}
