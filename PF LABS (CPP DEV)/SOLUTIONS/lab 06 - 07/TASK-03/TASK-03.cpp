#include <iostream>
#include "abdullah"

using namespace std ;

int main ()

{
	
	bool check = true ;
	
	while ( check )
	
	{
		
		int array [10] ;
	
		for ( int i = 0 ; i < 10 ; i++ )
	
		{
		
			cout << "Please enter integer at index A." << i << " : " ;
			while ( ! ( cin >> array[i] ) )
			
			{
				
				cin_clear ("No character!!") ;
				cout << "Please enter integer at index A." << i << " : " ;
				
			}
			
		}
	
		system ("cls") ;
	
		cout << "The unswaped array is : " ;
	
		for ( int i = 0 ; i < 10 ; i++ )
	
		{	
		
			cout << array [ i ] << " " ;
		
		}
	
		for ( int i = 0 ; i < 9 ; i+=2 )
	
		{
		
			swap ( array , i , i + 1 ) ;
		
		}
	
		cout << endl << endl << "The swaped array is : " ;
	
		for ( int i = 0 ; i < 10 ; i++ )
	
		{
		
			cout << array [ i ] << " " ;
		
		}
		
		cout << endl ;
		
		check = continuationLoop () ;
		
	}
	
}
