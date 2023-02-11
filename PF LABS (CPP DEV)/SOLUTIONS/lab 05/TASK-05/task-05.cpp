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
		
		string line = "Please enter the base or height of pyramid less than 10 : " ;
		
		cout << line ;
	
		while ( ! ( cin >> length ) || length < 1 || length > 10 ) 
	
		{
		
			cin_clear ( line ) ;
		
		}
		
		system("cls") ;
	
		for ( int i = 1 ; i <= length ; i++ )
	
		{
		
			for ( int j = length - 1 ; j >= i ; j-- )
				cout << " " ;
		
			for ( int k = 1 ; k <= ( 2 * i ) - 1 ; k++ )
				cout << i ;
				
			cout << endl ;
		
		}
		
		flag = continuationLoop () ;
		
	}
}
