#include <iostream>

using namespace std ;

int a ( int i )

{
	
	if ( i == 0 )
		return 0 ;
		
	else if ( i == 1 )
		return 1 ;
		
	else 
		return a ( i - 1 ) + a ( i - 2 ) ;
	
}

int main ()

{
	
	int series_limit ;

	cout << "Please enter number of series elements : " ;
	cin >> series_limit ;
	
	for ( int i = 0 ; i < series_limit ; i++ )
	
	{
		
		cout << a ( i ) << " " ;
		
	}
}
