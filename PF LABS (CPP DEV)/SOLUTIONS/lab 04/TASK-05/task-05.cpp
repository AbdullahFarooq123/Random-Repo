#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

using namespace std ;


void cin_clear ()

{
	
	cout << "No character or a negative value !" ;
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
		
		float level = 1.5 , x ;
	
		int a = 18 ;
		
		char option ;
		
		bool check = true ;
	
		cout << "Please enter current ocean level : " ;
	
		while ( ! ( cin >> x ) || x < 1 )
		
		{
			
			cin_clear() ;
			cout << "Please enter current ocean level : " ;	
			
		} 
	
		system ("CLS") ;
	
		for (int i = 1 ; i <= 25 ; i++ )
	
		{
		
			cout << "The ocean level in 20" << a++ ;
		
			cout << " is " <<(float) x << endl ;
		
			x = level + x ;
		
			Sleep (500) ;
	
		} 
	
		system ("PAUSE") ;
	
		flag = continuationLoop() ;
		
	}	
	
	return 0 ;
	
}
