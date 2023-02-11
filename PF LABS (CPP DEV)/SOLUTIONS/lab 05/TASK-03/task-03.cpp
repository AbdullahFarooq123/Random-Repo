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
		
		string line = "Please enter the base or height of (l.H.S) down-side right triangle : " ;
		
		cout << line ;
	
		while ( ! ( cin >> length ) ) 
	
		{
		
			cin_clear ( line ) ;
		
		}
		
		system("cls") ;
		
		for ( int i = 0 ; i < length ; i++ )
	
		{
		
			for ( int j = 0 ; j < length ; j++ )
		
			{
			
				if ( i <= j)
					cout << "*" ;
				
				else 
					cout << " " ;
			
			}
		
			cout << endl ;
		
		}
		
		flag = continuationLoop () ;
		
	}
	
}
