#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std ;

main ()

{
	bool flag = true ;
	
	while ( flag )
	
	{
		
		int num = 0 , remainder , digit = 0 , original = 0 ;
		
		bool check = true ;

		char option ;

		cout << "Please enter number : " ;

		while ( ! ( cin >> num ) )
		
		{
		
			cin.clear () ;
			cin.ignore () ;
			cout << "No character please!\a" ;
			Sleep ( 3000 ) ;
			system("CLS") ;
			cout << "Please enter number : " ;
				
		}
	
		original = num ;
	
		do
		
		{
		
			remainder = num % 10 ;
			digit = digit + remainder ;
			num /= 10 ;
			
		} while ( num != 0 );
	
		cout <<"The sum of " << original << " is " << digit ;
		
		Sleep ( 3000 ) ;
		
		while (check)
		
		{
			system ("CLS") ;
			
			cout << "Do you want to continue (y/n) " ;
			
			option = getch() ;
		
			if ( option == 'y' )
		
			{
				
				flag = true ;
				
				check = false ;
				
				
			}
			
			else if ( option == 'n' )
			
			{
				
				flag = false ;
				
				check = false ;
					
			}
			
		}
		
		system ("CLS") ;	
	
	}
	
}
