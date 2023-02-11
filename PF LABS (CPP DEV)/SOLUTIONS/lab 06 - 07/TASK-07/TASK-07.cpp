#include <iostream>
#include "abdullah"

using namespace std ;

int main ()

{
	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		int elements ;
	
		cout << "Please enter number of elements of array : " ;
	
		while ( ! ( cin >> elements ) || elements < 1 )
	
		{
		
			cin_clear()	;
			cout << "Please enter number of elements of array : " ;
		
		}
	
		int array [elements] ;
		int even_values [100] ;
		int even_indexes [100] ;
	
		for ( int i = 0 ; i < elements ; i++ )
	
		{
		
			cout << "Please enter element at index A." << i << " : " ;
		
			while ( ! ( cin >> array[i] ) )
	
			{
		
				cin_clear("No character!!")	;
				cout << "Please enter element at index A." << i << " : " ;
		
			}
		
		}
	
		int x = 0 ;
	
		for ( int i = 0 ; i < elements ; i++ )
	
		{
		
			if ( array [i] % 2 == 0 )
	
			{
			
				even_values [x] = array [i] ;
				even_indexes [x] = i ;
				x++ ;
				
			}
		
		}
	
		
		system("cls") ;
		
		( x == 0) 
	
		?
	
		cout << "No even values!!"
	
		:
		
		cout << "The even values are : " << endl ;
		
		for ( int i = 0 ; i < x ; i++ )
		
		{
			
			cout << "A." << even_indexes [i] << " : " << even_values [i] << endl ;
			
		}
	
		flag = continuationLoop() ;
		
	}

}
