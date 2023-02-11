#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std ;

int continuationLoop ()

{
	bool check = true , flag = true ;
	
	char option ;
	
	while ( check )
			
			{
					
				system("CLS") ;
				
				cout << "Do you want to continue (y/n) : " ;
			
				option = getch() ;
				
				if ( option == 'y' )
				
				{
					
					system ("CLS") ;
					
					return 1 ;
				
				}
				
				else if ( option == 'n' )
				
				{
					
					return 0 ;
						
				}
				
				

			}
	
}


main ()
{//************************************************************************************Variable decleration*****************************************************

	bool flag = true ;
	
	while ( flag )
	
	{
		
		long long int number , num , remainder , digits = 0 , z , i ;
	
	
		cout << "Please enter a number : " ;
	
		while ( ! ( cin >> number ) )
		
		{
			
			cin.clear () ;
			cin.ignore ( INT_MAX , '\n' ) ;
			cout << "Error !! Please enter an integral value. " ;
			Sleep (1000) ;
			system ("CLS") ;
			cout << "Please enter a number : " ;
	
		}
	
		num = number ;
	
		while ( number != 0)
	
		{
		
			remainder = number % 10 ;
			digits = ( digits * 10 ) + remainder ;
			number /= 10 ;
		
		}

		system ("CLS") ;
	
		cout << "The number in backward is " << digits << endl ;
	
		if ( digits == num )
	
		{
	
			cout << "number is palindrome!! " << endl ;
	
		}
	
		else
	
		{
	
			cout << "number is not palindrome!! " << endl ;
	
		}
	
		system ("pause") ;
		
		flag = continuationLoop() ;
		
	}

}
