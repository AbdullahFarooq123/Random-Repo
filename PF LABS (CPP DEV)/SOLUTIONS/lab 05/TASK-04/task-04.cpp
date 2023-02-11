#include <iostream>
#include "abdullah"
#include <string>

using namespace std ;

int main ()

{
	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		int length ;
		
		string line = "Please enter the base or height of (l.H.S) right triangle : " ;
		
		cout << line ;
	
		while ( ! ( cin >> length ) ) 
	
		{
		
			cin_clear ( line ) ;
		
		}
		
		system("cls") ;
	
		for ( int i = 1 ; i <= length ; i++ )
	
		{
		
			for ( int j = length - 1 ; j >= i ; j--)
				cout << " " ;
		
			for ( int k = 1 ; k <= i ; k++ )
				cout << "*" ;
			
			cout << endl ;
		}
	
		flag = continuationLoop () ;
	
	}
	
}
