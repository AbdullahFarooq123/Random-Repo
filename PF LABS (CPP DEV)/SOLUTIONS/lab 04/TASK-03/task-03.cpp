#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

void cin_clear ()

{
	
	cout << "No character please !" ;
	Sleep (2000) ;
	system("CLS") ;
	cin.clear () ;
	cin.ignore ( INT_MAX , '\n' ) ;

}

int main()

{
	
	bool flag = true ;
	
	while (flag)
	
	{
		
		bool check = true ;
		
		int notes [ 10 ] = { 5000 , 1000 , 500 , 100 , 50 , 20 , 10 , 5 , 2 , 1 } ;
	
		int output_notes [ 10 ] = {0};
	
		int ammount ;
	
		cout << "Please enter ammount : " ;
		while ( ! ( cin >> ammount ) )
		
		{
			
			cin_clear () ;
			cout << "Please enter ammount : " ;
			
		}
	
	
		int i = 0 ;
	
		while ( i < 10 )
	
		{
	
			if ( ammount >= notes [i] )
		
			{
			
				output_notes [i] = ammount / notes [i] ;
			
				ammount = ammount % notes [i] ;
			
				
			}
		
			++i ;	
			
		}  
	
		system ("CLS") ;
	
	
		cout << "The notes will be as follows : " << endl << endl ;
	
		i = 0 ;
	
		while ( i < 10 )
	
		{
		
		
			if ( output_notes [i] >= 1 )
		
			{
			
				cout << notes [i] << " Rs = " << output_notes [i] ;
		
				if ( output_notes [i] > 1 )
		
				{
			
					cout << " Notes " ;
			 
				}
		
				else
	
				{	
			
					cout << " Note " ;
			
				}
		
				cout << endl ;
			
			}
		
			i++ ;
		
		}
		
		
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
