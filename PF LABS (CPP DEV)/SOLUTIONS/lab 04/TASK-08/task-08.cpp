#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

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
		
		double population , increase , days ;
	
		cout << "Please enter the initial number of organisms : " ;
		
		while ( ! ( cin >> population ) || population < 2 )
		
		{
			
			cout << "No character or number less than 2 !" ;
			cin_clear () ;
			cout << "Please enter the initial number of organisms : " ;
			
		}
	
		cout << "Please enter percent increase in population : " ;
		
		while ( ! ( cin >> increase ) || increase < 1 )
		
		{
			
			cout << "No character or number less than 1 !" ;
			cin_clear () ;
			cout << "Please enter percent increase in population : " ;
			
		}
		
		increase /= 100.0 ;
	
		cout << "Please enter number of days they will multiply : " ;
		while ( ! ( cin >> days ) || days < 1 )
		
		{
			
			cout << "No character or number less than 2 !" ;
			cin_clear () ;
			cout << "Please enter number of days they will multiply : " ;
			
		}
	
		system ("CLS") ;
	
		int i = 1 ;
	
		while ( i <= days )
	
		{
		
			population = population + ( increase * population ) ;
		
			cout <<"DAY : " << i << endl ;
			cout << "Population is : " << population << endl << endl ;
		
			i++ ;
			
			Sleep(800) ;
		
		}
		
		system("pause");
		
		flag = continuationLoop() ;
		
	}
	
}
