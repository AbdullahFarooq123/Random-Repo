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
		while ( ! ( cin >> elements) )
		
		{
			
			cin_clear () ;
			cout << "Please enter number of elements of array : " ;
			
		}
		
		int factor ;
		
		cout << "Please enter the rotating factor : " ;
		while ( ! ( cin >> factor) )
		
		{
			
			cin_clear () ;
			cout << "Please enter the rotating factor : " ;
			
		}
	
		int array [elements] ;
	
		for ( int x = 0 ; x < elements ; x++ )
	
		{
		
			cout << "Please enter element at index A." << x << " : " ;
			while ( ! ( cin >> array [x]) )
		
			{
			
				cin_clear () ;
				cout << "Please enter element at index A." << x << " : " ;
			
			}
		
		}
		
		system("cls") ;
		
		cout << "Array before rotation : " << endl ;
		
		for ( int i = 0 ; i < elements ; i++ )
	
		{
		
			cout << array [ i ] << "\t" ;
		
		}
		
		cout << endl << endl  << "Array after rotation : " << endl ;
		
		for ( int i = 0 ; i < elements ; i++ )
	
		{
		
			cout << array [ ( i + factor ) % elements ] << "\t" ;
		
		}
		
		cout << endl ;
		
		flag = continuationLoop () ;
		
	}
	
}
