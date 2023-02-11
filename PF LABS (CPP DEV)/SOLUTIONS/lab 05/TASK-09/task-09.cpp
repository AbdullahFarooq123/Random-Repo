#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "abdullah"

#define pi 3.14 

using namespace std ;

double factorial ( int ) ;

int main ()

{
	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		long double x = 0 , n = 0 ;
		long double series = 0.0 ;
	
		bool flag = true ;
	
		string line_1 = "Please enter the angle : " ;
		string line_2 = "Please enter the upper limit : " ;
		
		cout << line_1 ;
		while ( ! ( cin >> x ) )
	
		{
		
			cin_clear ( line_1 , "No chatacter!" ) ;
		
		}
	
		int angle = x ;
	
			if ( x > 360 )
	
		{
		
			while ( ! ( x <= 360 ) )
		
			{
			
				x -= 360 ;
				
			}
	
		}
	
		if ( x < 0 )
	
		{
		
			while ( ! ( x >= 0 ) )
		
			{
			
				x += 360 ;
			
			}
		
		}
	
	
	
		x  = x * ( pi / 180 ) ;
	
		cout << line_2 ;
	
		while ( ! ( cin >> n ) || n < 1 )
	
		{
		
			cin_clear ( line_2 ) ;
		
		}
	
	
		for ( int i = 0 ; i <= n ; i+=2 )
	
		{
		
			if ( flag == 1 )
				series = series + ( ( pow ( x , i ) ) / factorial (i) )  ;		
		
			else 
				series = series - ( ( pow ( x , i ) ) / factorial (i) ) ;
	
			flag = !flag ;
	
		}
	
		cout << "Value of cos( " << angle << " ) in by series sum is : " << fixed << setprecision (10) << series ;
		
		cout << endl ;
		
		flag = continuationLoop () ;	
		
		cout << endl ;
	}
	
}

double factorial ( int i )

{
	
	if ( i <= 1 )
		return 1 ;
		
	else 
		return i * factorial ( i - 1 ) ;
	
}
