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
		
	double diameter , area , radius ;
	int slices ;
	
	cout << "Please enter the diameter of pizza in inches : " ;
	cin >> diameter ;
	
	radius = diameter / 2 ;
	area = pi * pow ( radius , 2 ) ;
	slices = area / 14.125 ;
	
	system ( "CLS" ) ;
	
	cout << "The number of slices, that the pizza of diameter \" " << diameter << " inches\", are \"" << slices << "\". " ;
	
	getch () ;
	
	system ( "CLS" ) ;
	
	goto a ;
}
