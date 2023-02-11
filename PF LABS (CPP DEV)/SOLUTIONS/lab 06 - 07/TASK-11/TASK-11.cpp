#include <iostream>
#include "abdullah"

using namespace std ;

void calculateRetail () ;

int main ()

{
	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		calculateRetail () ;
		flag = continuationLoop() ;
		
	}
	
}

void calculateRetail ()

{
	double wholesale_cost , markup_percentage ;
	
	cout << "Please enter wholesale cost : " ;
	
	while ( ! ( cin >> wholesale_cost ) || wholesale_cost < 1 )
	
	{
		
		cin_clear () ;
		cout << "Please enter wholesale cost : " ;
		
	}
	
	cout << "Please enter markup percentage : " ;
	while ( ! ( cin >> markup_percentage ) || markup_percentage < 1 ) 
	{
		
		cin_clear () ;
		cout << "Please enter markup percentage : " ;
		 
	}
	
	system ("cls") ;
	
	double retail_price = wholesale_cost * markup_percentage / 100 + wholesale_cost ;
	
	cout << "The retail price of the item is : " << retail_price << " Rs.";
	
}
