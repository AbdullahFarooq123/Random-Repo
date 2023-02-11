#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

void cin_clear ()

{
	
	cout << "No character or negative value !" ;
	Sleep (2000) ;
	system("CLS") ;
	cin.clear () ;
	cin.ignore ( INT_MAX , '\n' ) ;

}

int main()

{
	bool flag = true ;
	
	while ( flag )
	
	{
		
		int num , sum = 0 , i = 0 ;
		
		bool check = true ;
		
		char option ;
		
		cout << "Please enter a number : " ;
		
		while ( ! ( cin >> num ) || num < 0 )
		
		{
			
			cin_clear () ;
			cout << "Please enter a number : " ;
			
		}
	
		while ( i <= num )
		
		{
		
			sum += i ;
			i++ ;
		
		}
	
		cout << "Sum is " << sum << endl ;
		
		system ("PAUSE") ;
		
		while ( check )
		
		{
			system ("CLS") ;
			
			cout << "Do you want to continue (y/n) : " ;
		
			char option ;
		
			option = getch() ;
		
			if ( option == 'y' || option == 'n')

			{
				
				if ( option == 'y')
				
				{
					
					
					check = false;
					flag = true ;
					
				}
				
				else 
				
				{
					
					check = false ;
					flag = false ;
					
				}
			}
		}		
	}		
}
