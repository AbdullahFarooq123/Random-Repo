#include <iostream>
#include <cstdlib>
#include  <ctime>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std ;

void cin_clear ()

{
	
	Sleep (2000) ;
	system("CLS") ;
	cin.clear () ;
	cin.ignore ( INT_MAX , '\n' ) ;

}

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

int main ()

{
	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		srand ( time ( 0 ) ) ;
	
		int num_1 , num_2 , sum , array_1 [30] , array_2 [30] , i = 0 , test , marks = 0 ;
	
		char option ;
		
		int question ;
		
		cout << "Please enter number of questions to be asked : " ;
		while ( ! ( cin >> question ) )
		
		{
			
			cout << "Questions cannot be less than 1 ! " ;
			cin_clear () ;
			cout << "Please enter number of questions to be asked : " ;
			
		}
	
		for ( int j = 1 ; j <= question ; j++ )
		
		{
			
			num_1 = ( rand () % 10 ) + 1 ;
			num_2 = ( rand () % 10 ) + 1 ;
		
			sum = num_1 + num_2 ;
		
			array_1 [ i ] = sum ;
		
			cout << "Please enter sum of two numbers : " ;
			while ( ! ( cin >> test ) )
			
			{
				
				cout << "Sum cannot be less than 1 ! " ;
				cin_clear () ;
				cout << "Please enter sum of two numbers : " ;
				
			}
		
			array_2 [ i ] = test ;
		
			++i ;
		
			system ( "CLS" ) ;
			
		}
	
		system ( "CLS" ) ;
	
		cout << "*****************************************************************" << endl ;
		cout << "* Numbers entered by user \t\t * \t KEY            * " << endl ;
		cout << "*****************************************************************" << endl ;
		for ( int y = 0 ; y < i ; y++ )
	
		{
		
			cout << "*\t" << array_2 [ y ] << "\t\t\t\t *\t  " << array_1 [ y ]  << "\t\t*" << endl ; 
		
		}
	
		cout << "*****************************************************************" << endl ;
	
		system ( "PAUSE" ) ;
		system (  "CLS"  ) ;
	 
		cout << i << " Question" ;
	
		if ( i > 1 )
		cout << "s were" ;
	
		else 
		cout << " was" ;
	
		cout << " asked." << endl ;
		cout << "The result is as follows :- " << endl ;
	
		for ( int x = 0 ; x < i ; )
	
		{
			
			if ( array_1 [x] == array_2 [x] )
		
			{
			
				cout << "Answer no " << ++x << " is correct." << endl ;
				++marks ;
			
			}
		
			else if ( array_1 [x] != array_2 [x] )
		
			{
			
				cout << "Answer no " << ++x << " is incorrect. " << endl ;
			
			}
					
		}
	
		system ( "PAUSE" ) ;
		system (  "CLS"  ) ;
	
		cout << "You got " << marks << " out of " << i << "." << endl ;
	
		if ( marks >= ( i / 2.0 ) )
	
		{
		
			cout << "Good work! " ;
		
		}
	
		else 
	
		{
		
			cout << "Better luck next time! " ;
		
		}
		
		cout << endl ;
		system ("pause") ;
		system ("cls") ;
		
		flag = continuationLoop () ;
		
	}
	
}
