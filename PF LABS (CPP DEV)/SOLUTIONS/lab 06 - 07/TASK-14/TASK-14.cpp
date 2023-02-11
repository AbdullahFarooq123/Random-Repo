#include <iostream>
#include <cmath>
#include "abdullah"

using namespace std ;

double presentValue ( double , double , double ) ;

int main ()

{
	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		double future_value , annual_interest_rate , number_of_years ;
	
		cout << "Please enter the ammount you want after reqired years : " ;
	
		while ( ! ( cin >> future_value ) || future_value < 1 ) 
	
		{
		
			cin_clear () ;
			cout << "Please enter the ammount you want after reqired years : " ;
		
		}
	
		cout << "Please enter annual interest rate : " ;
	
		while ( ! ( cin >> annual_interest_rate ) || annual_interest_rate < 0 )
	
		{
		
			cin_clear () ;
			cout << "Please enter annual interest rate : " ;
		
		
		}
	
		cout << "Please enter the number of years for your money to stay : " ;
		
		while ( ! ( cin >> number_of_years ) || number_of_years < 0 )
	
		{
		
			cin_clear () ;
			cout << "Please enter the number of years for your money to stay : " ;
			
		}
	
		system ("cls") ;
	
		cout << "The money to deposit today in the bank is : " << presentValue ( future_value , annual_interest_rate , number_of_years ) << " Rs." ;
	
		flag = continuationLoop () ;
				
		}
	
}

double presentValue ( double future_value , double annual_interest_rate , double number_of_years )

{
	
	double present = future_value / pow ( ( 1 + annual_interest_rate / 100 ) , number_of_years ) ;
	return present ;
	
}
