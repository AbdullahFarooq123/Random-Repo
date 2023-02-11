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
		
		long long int number , num , remainder , digits = 0 , z , i = 0 ;
	
	
		cout << "Please enter a binary number : " ;
	
		while ( ! ( cin >> number ) )
	
		{
	
			cin.clear () ;
			cin.ignore ( INT_MAX , '\n' ) ;
			cout << "Error !! Please enter an integral value. " ;
			Sleep(1000) ;
			system ("CLS") ;
	
			cout << "Please enter a binary number : " ;
	
		}
	
	
		while ( number != 0)
	
		{
	
			remainder = number % 10 ;
			digits = ( digits ) + ( remainder * pow ( 2 , i ) ) ;
			number /= 10 ;
			++i;
	
		}
	
		system ("CLS") ;
	
		cout << "Decimal number is " << digits << endl ;
		
		system("pause") ;
		
		flag = continuationLoop () ;
		
		
	}
	
}
