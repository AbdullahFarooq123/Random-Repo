#include <iostream>
#include "abdullah"
#include <string>

using namespace std ;

int main ()

{

	bool flag = true ;
	
	while ( flag )
	
	{
		
		int array [10] ;
	
		int maximum ; 
		int minimum ;

		for ( int i = 0 ; i < 10 ; i++ )

		{
		
			cout << "Please enter element at index A." << i << " : " ;
		
			while ( ! ( cin >> array[i] ) )
		
			{
				string error = "No character!!" ;
				cin_clear (error) ;
				cout << "Please enter element at index A." << i << " : " ;
			
			}
		
		
			static int min = array [0] ;
			static int max = array [0] ;

			if ( min > array [i] )
				 min = array [i] ;
			if ( max < array [i] )
				 max = array [i] ;
			 
			minimum = min ;
			maximum = max ;

		}
	
		system("cls") ;
	
		cout << "Elements entered by users are : " ;
		cout << endl ;
	
		for ( int i = 0 ; i < 10 ; i++ )

		{

			cout << array[i] << "\t";

		}
	
		cout << endl ;
	
		system ("pause") ;
		system ("cls") ;
	
		cout << "The smallest value in the array is : " << minimum << endl ;
		cout << "The largest value in the array is : " << maximum ;
		
		flag = continuationLoop () ;
		
	}

}

