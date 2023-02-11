#include <iostream>
#include <stdlib.h>
#include <windows.h>
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
		
		int floors , no_of_rooms [30] , occupied [30] ,  total_rooms = 0 , total_occupied = 0 , a , b ;
	
		cout << "Please enter the floors of the hotel : " ;
		while ( ! ( cin >> floors ) || floors < 1 )
	
		{
		
			cout << "Floors cannot be less than 1 ! " ;
			cin_clear () ;
			cout << "Please enter the floors of the hotel : " ;
		
		}
	
		int x = 0 ;
	
		for ( int i = 1 ; i <= floors ; ++i )
	
		{
		
			cout << "\t\t\t\t\tFLOOR:" << i << endl << endl ;
		
			cout << "Please enter the total number of rooms : " ;
			while ( ! ( cin >> a ) || a < 10 )
		
			{
			
				cout << "Rooms cannot be less than 10 or a character !" ;
				cin_clear () ;
				cout << "Please enter the total number of rooms : " ;
				
			}
			
			no_of_rooms [x] = a ;
		
			cout << "Please enter the number of rooms occupied on the floor : " ;
			while ( ! ( cin >> b ) || b < 0 )
		
			{
			
			cout << "Occupied rooms cannot be less than 0 or a character !" ;
			cin_clear () ;
			cout << "Please enter the number of rooms occupied on the floor : " ;
			
			}
	
			occupied [x] = b ;
				
			system ( "CLS" ) ;
			x++ ;
		}
	
		cout << "Total rooms are : " ;
	
		for ( int i = 0 ; i < floors ; ++i )
	
		{
		
			total_rooms = no_of_rooms[i] + total_rooms ;
			total_occupied = occupied [i] + total_occupied ;
		
		}
	
		cout << total_occupied << endl ;
	
		cout << "Percentage occupancy is : " << ( (float) total_occupied / total_rooms) * 100.0  << " % " ;
		
		system ("pause ") ;
		system ("cls") ;

		flag = continuationLoop () ;
		
	}
	
}
