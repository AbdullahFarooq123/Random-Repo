#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
 
using namespace std;

int main()
{
	a:
		
    float assesment = 60.0 , property_value , tax_rate , annual_property_tax , quarterly_bill ;

    cout << "Please enter the value of the property : ";
    cin  >> property_value;
    cout << "Please enter the current tax rate : ";
    cin  >> tax_rate;
    
    system ("CLS") ;

    annual_property_tax = ( ( ( property_value * assesment / 100 ) - 5000 ) / 100 ) * tax_rate ;

    quarterly_bill = annual_property_tax / 4 ;

    cout << "Value of the property : " ;
    cout << setprecision ( 7 ) << setw ( 7 ) << property_value << " $ " ;

    cout << "\n\nAnnual property tax : " ;
    cout << setprecision ( 7 ) << setw ( 7 ) << annual_property_tax << " $ " ;

    cout << "\n\nQuarterly tax bill : " ;
    cout << setprecision ( 7 ) << setw ( 7 ) << quarterly_bill << " $ " ;
    
	cout << endl ;

	getch () ;
    system ("CLS") ;
    
	goto a ;
}
