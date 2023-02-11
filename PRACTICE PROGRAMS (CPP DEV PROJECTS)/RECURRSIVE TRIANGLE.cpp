#include <iostream>

using namespace std ;

void recurrsiveTriangle ( int ) ;

int main ()

{
	
	int height ;
	
	cin >> height ;
	
	for ( int i = 1 ; i <= height ; i++ )
	
	{
		
		recurrsiveTriangle ( i ) ;
		
		cout << endl ;
		
	}
	
}

void recurrsiveTriangle ( int stars )

{
	
	if ( stars == 1 )
	
	{
		
			cout << "*" ;
			return ;
		
	}
	
	else 
	 recurrsiveTriangle( stars - 1 ) ;
	 cout << "*" ;
	
	
}


