#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <cmath>

using namespace std ;

int main ()

{
	
    float charge = 2500.0 , increased_charge , x = 0 ;
        
	cout << "Charges for next 6 years is : " << endl ;
	
	int i = 1 ;
	
	while ( i <= 6 )
	
	{
		
		increased_charge = charge + x ;
		
		x = increased_charge * 4 / 100 ;
		
		charge = increased_charge ;
		
		i++ ;
		
		Sleep (700) ;
		
		cout << "Year " << i << " : Charge is " << increased_charge << " Rs " << endl ;
		
	} 
	
	system ("pause") ;
	
}
