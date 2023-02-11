#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "abdullah"

using namespace std ;

int main ()

{
	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		srand ( time (0) ) ;
	
		int lottery_array [5] = {0} ;
	
		for ( int i = 0 ; i < 5 ; i++ )
	
		{
		
			lottery_array [i] = rand() % 10 ;
		
		}
	
		int user_array [5] = {0} ;
		int result_array [5] = {0} ;
		int x = 0 ;
	
		for ( int i = 0 ; i < 5 ; i++ ) 

		{
		
			cout << "Please enter integer at index A." << i << " : " ;

			while ( ! ( cin >> user_array[i] ) )
		
			{
			
				cin_clear ("No character!!") ;
				cout << "Please enter integer at index A." << i << " : " ;
					
			}
		
			if ( lottery_array [i] == user_array [i] )
	
			{
	
				result_array[x] = user_array[i] ;
				x++ ;
	
			}
		
		}
	
		system("cls") ;
	
		cout << "The lottery is : " << endl ;
	 
		for ( int i = 0 ; i < 5 ; i++ )
	
		{
		
			cout << lottery_array[i] << "\t" ;
		
		}
	
		cout << endl ;
	
		cout << "The value entered by user is : " << endl ;
	
		for ( int i = 0 ; i < 5 ; i++ )

		{
		
			cout << user_array[i] << "\t" ;
		
		}
	
		cout << endl ;
	
	
		if ( x == 0 )
			cout << "No matching numbers!!" ;
	
		else 

		{
		
			cout << "The number" ;

			if ( x > 1 )
	
			cout << "s" ;
	
			cout << " matching the lottery " ;
	
			( x > 1 ) ? cout << " are" : cout << " is" ;
	
			cout << endl ;
	 
			for ( int i = 0 ; i < x ; i++ )
				cout << result_array [i] << "\t" ;
			
			if ( x == 5 )
				cout << "CONGRAGULATIONS!! YOU WON A GRAND PRIZE!!" ;
		
		}
		
		flag = continuationLoop () ;
		
	}
		
}
