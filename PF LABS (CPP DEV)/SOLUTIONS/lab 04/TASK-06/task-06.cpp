#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <cmath>

using namespace std;

void cin_clear ()

{
	
	cout << "No character or negative value !" ;
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
	
	while (flag)
	
	{
		
		float r = 1.0 / 2 , a = 1.0 / 2 , limit , sum = 0 ;
	
		cout << "Please enter series limit : " ;
		while ( ! ( cin >> limit ) || limit < 1 )
		
		{
			
			cin_clear () ;
			cout << "Please enter series limit : " ;	
			
		}
		
		for ( int i = 0 ; i <= limit ; i++ )
	
		{
		
			sum = a * pow ( r , i ) + sum ;
		
		}
	
		system ("CLS") ;
	
		cout << "Sum of series is " << sum << endl << endl ; 
		
		system ("pause") ;
		
		flag = continuationLoop () ;
		
	}
	
	return 0 ;
	
}
