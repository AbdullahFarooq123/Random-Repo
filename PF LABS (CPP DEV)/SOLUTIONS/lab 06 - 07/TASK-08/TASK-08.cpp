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
	
		int array [elements] ;
	
		for ( int i = 0 ; i < elements ; i++ )
	
		{
		
				cout << "Please enter element at index A." << i << " : " ;
				while ( ! ( cin >> array [i]) )
		
				{
			
					cin_clear () ;
					cout << "Please enter element at index A." << i << " : " ;
			
				}
		
		}
	
		system("cls") ;
	
		cout << "The array before swaping is : " ;
	
		for ( int i = 0 ; i < elements ; i++ )
	
		{
		
			cout << array [i] << " " ;
		
		}
	
		cout << endl ;
	
		swap ( array , 0 , elements - 1 ) ;
	
		cout << "The new array after swaping is : " ;
	
		for ( int i = 0 ; i < elements ; i++ )
	
		{
		
			cout << array [i] << " " ;
		
		}
	
		flag = continuationLoop () ;
				
	}

}
