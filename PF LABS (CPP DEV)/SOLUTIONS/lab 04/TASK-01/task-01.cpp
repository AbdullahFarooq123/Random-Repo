#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <windows.h>

using namespace std ;

int main ()
{
	
	bool flag = true ;

	while ( flag )
	
	{
		
		int num , remainder , digit = 0 , original = 0 , i = 0 ;
	
		char option ;
		
		bool check = true ;
		
		cout << "Please enter number : " ;

		while ( ! ( cin >> num ) )
		
		{
		
			cin.clear () ;
			cin.ignore (INT_MAX , '\n' ) ;
			cout << "No character please!" ;
			Sleep ( 3000 ) ;
			system("CLS") ;
			cout << "Please enter a number : " ;
		
		}
	
		original = num ;


		while ( num != 0 )
		
		{
		
			remainder = num % 10 ;
			digit = ( digit * 10 ) + remainder ;
			num /= 10 ;
			i++;
		
		}
	
		cout <<"The reverse of " << original << " is "<< fixed << setfill ('0') << setw (i) << digit ;
		
		Sleep ( 3000 ) ;
		
		while ( check )
		
		{
			system ("CLS") ;
			
			cout << "Do you want to continue (y/n) : " ;
		
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
