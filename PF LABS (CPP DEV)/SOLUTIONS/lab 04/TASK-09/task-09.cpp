#include <iostream>

using namespace std ;

int main ()

{
	
	int s = 188 , o = 7 , d = 30 ;
	
	cout << "________________________________________________________________________________________________" << endl ;
	cout << "Overs bowled\t\t6.25\t\t7\t\t8\t\t9\t\t10			 											\t|" << endl ;
	cout << "------------------------------------------------------------------------------------------------|" << endl ;
	cout << "Projected Score " << endl ;
	
	for ( int i = 35 ; i <= 50 ; i += 5 )
	
	{
		
		cout << "In " << i << " Overs " << "\t\t" << ( 6.25 * ( i - d ) ) + s
		                                << "\t\t" << ( o * ( i - d ) ) + s 
										<< "\t\t" << ( ++o * ( i - d ) ) + s 
										<< "\t\t" << ( ++o * ( i - d ) ) + s 
										<< "\t\t" << ( ++o * ( i - d ) ) + s << "\t|" << endl ;
		
	}
	
	cout << "________________________________________________________________________________________________|" << endl ;
	
}
