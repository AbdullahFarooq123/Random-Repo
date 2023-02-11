#include <iostream>
#include <string>
#include "abdullah"

using namespace std ;

int main ()

{
	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		int length ;
	
		string line = "Please enter the length or diameter of diamond (odd number) : " ;
		string error = "length should not be a character or an even number!! " ;
	
		cout << line ;
	
		while ( ! ( cin >> length ) || length % 2 == 0 )
	
		{
		
			cin_clear ( line , error ) ;
	
		}
	
		for ( int i = 1 ; i <= length ; i++ )
			cout << "*" ;
		
		cout << endl ;
		
		for ( int i = 1 ; i <= length / 2 ; i++ )
	
		{
		
			for ( int j = length / 2 ; j >= i ; j-- )
				cout << "*" ;
			
			for ( int j = 1 ; j <= ( 2 * i - 1 ) ; j++ )
				cout << " " ;
			
			for ( int j = length / 2 ; j >= i ; j-- )
				cout << "*" ;
			
			cout << endl ; 
		
		}
	
		for ( int i = 1 ; i < length / 2 ; i++ )
	
		{
		
			for ( int j = 0 ; j <= i ; j++ )
				cout << "*" ;
				
			for ( int j = length - 4 ; j >= ( 2 * i - 1 ) ; j-- )
				cout << " " ;
			
			for ( int j = 0 ; j <= i ; j++ )
				cout << "*" ;
			
			cout << endl ;
		
		}
	
	for ( int i = 1 ; i <= length ; i++ )
		cout << "*" ;
		
	cout << endl ;
		
	flag = continuationLoop () ;
		
	}
	
}
