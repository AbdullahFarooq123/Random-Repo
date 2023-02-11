#include <iostream>
#include "abdullah"

using namespace std ;

int  main ()

{
	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		int array[20] ;
		int elements ;
	
		cout << "Please enter number of elements of array less than 20 : " ;
		while ( ! ( cin >> elements ) || elements > 20 || elements < 0 )
		{
			
			cin_clear ("No character or element in range 0 - 20 ") ;
			cout << "Please enter number of elements of array less than 20 : " ;
			
		}
	
		for ( int i = 0 ; i < elements ; i++ )
	
		{
		
			cout << "Please enter integer at index A." << i << " : " ;
			while ( ! ( cin >> array [i] ) )
			{
				
				cin_clear ("No character!") ;
				cout << "Please enter integer at index A." << i << " : " ;
				
			}
		
		}
		
		system("cls") ;
	
		cout << "The array in forward is : " ;
	
		for ( int i = 0 ; i < elements ; i++ )
	
		{
		
			cout << array [i] << " " ;
		
		}
	
		cout << endl ;
	
		cout << "The array in reverse is : " ;
	
	
		for ( int i = elements - 1 ; i >= 0 ; i-- )
	
		{
		
			cout << array [i] << " " ;
		
		}
		
		flag = continuationLoop () ;
		
	}
	
} 
