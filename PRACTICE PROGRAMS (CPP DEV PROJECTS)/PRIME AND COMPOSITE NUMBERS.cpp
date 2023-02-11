#include <iostream>
#include <math.h>

using namespace std ;

main ()

{
	long long int n = 0 , i = 2 ;
	bool flag = 1 ;
	cout << "Enter an intreger \n " ;
	cin >> n ;
	while ( i <= ( sqrt ( n ) ) )
	{
		if ( n % i == 0 )
		{
			flag = 0 ;
			break ;
		}
		
		else 
		i++ ;
		
	}
	if ( flag == 0 )
		cout << "Not prime" ;
	else 
		cout << "Prime" ;
	return 0 ;
	
}
