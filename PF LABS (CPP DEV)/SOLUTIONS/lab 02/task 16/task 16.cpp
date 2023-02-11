#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <stdlib.h>
#define pi 3.14

using namespace std;

int main()
{	
	
	a:
	
	double diameter , area , radius , x , pizza ;
	int slices , no_of_people ;
	
	cout << "Please enter no of people at the party : " ;
	cin >> no_of_people ;

	cout << "Please enter the diameter of pizza in inches : " ;
	cin >> diameter ;
	
	radius = diameter / 2 ;
	area = pi * pow ( radius , 2 ) ;
	slices = area / 14.125 ;
	pizza = slices / 4 ;
	x=pizza*no_of_people;
	
	system ( "CLS" ) ;
	
	cout << "The number of pizzas are : " << pizza << endl ;

	getch () ;
	system ("CLS") ;
	 
	goto a ;	
}
