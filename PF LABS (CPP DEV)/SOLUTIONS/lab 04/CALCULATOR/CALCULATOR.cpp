#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std ;

int main ()
{
	int i , digits , sum = 0 , num ;
	int num_1 , num_2 ;
	char option , choice ;
	bool check = true ;
	 
	while ( check )
	
	{
	
		cout << "************************************************CALCULATOR************************************************************ " << endl << endl ;
		cout <<	"1. SUM " << endl ;
		cout << "2. DIFFERENCE " << endl ;
		cout << "3. PRODUCT " << endl ;
		cout << "4. AVERAGE " << endl ;
		cout << "5. DIVISION " << endl ;
		cout << "6. EXIT " << endl ;
	
		option = getch () ;
	
		if ( option == '1' || option == '2' || option == '3' || option == '4' || option == '5' || option == '6' )
		
		{
			system ("CLS") ;
	
			switch (option)
			
			{
				case '1' :
			
					cout << "Please enter number of digits : " ;
					
					while ( ! ( cin >> digits ) || digits < 2 )
				
					{
				
						cout << "Number of digits cannot be less than 2 or a character!!" ;
						Sleep ( 2000 ) ;
						system ( "CLS" ) ;
						cout <<"Please enter number of digits : " ;
						cin.clear() ;
						cin.ignore ( INT_MAX , '\n' ) ;
				
					}
					
					system ( "CLS" ) ;
			
					for ( i = 1 ; i <= digits ; i++ )
				
					{
						cout << i << ".Enter number : " ;
						
						while ( ! ( cin >> num ) )
				
						{
				
							system ("CLS") ;
							cout << i << ".Enter number : " ;
							cin.clear() ;
							cin.ignore ( INT_MAX , '\n' ) ;
				
						}
						
						sum += num ;
					}
				
					cout << "Sum of all " << digits << " digits is " << sum ;
				
					break ;
				
				case '2' :
				
					cout << "Enter first number : " ;
				
					while ( ! ( cin >> num_1 ) )
				
						{
				
							system ("CLS") ;
							cout << "Enter first number : " ;
							cin.clear() ;
							cin.ignore ( INT_MAX , '\n' ) ;
				
						}
				
					cout << "Enter second number : " ;
				
					while ( ! ( cin >> num_2 ) )
				
						{
				
							system ("CLS") ;
							cout << "Enter second number : " ;
							cin.clear() ;
							cin.ignore ( INT_MAX , '\n' ) ;
				
						}
				
					cout << "Difference of 2 numbers is : " << num_1 - num_2 ;
				
					break ;
				
				case '3' :
				
					cout << "Please enter number of digits : " ;
					
					while ( ! ( cin >> digits ) || digits < 2 )
				
					{
				
						cout << "Number of digits cannot be less than 2 or a character!!" ;
						Sleep ( 2000 ) ;
						system ( "CLS" ) ;
						cout <<"Please enter number of digits : " ;
						cin.clear() ;
						cin.ignore ( INT_MAX , '\n' ) ;
				
					}
					
					sum = 1 ;
			
					for ( i = 1 ; i <= digits ; i++ )
				
					{
	
						cout << i << ".Enter number : " ;
				
						while ( ! ( cin >> num ) )
				
						{
	
							system ("CLS") ;
							cout << i << ".Enter number : " ;
							cin.clear() ;
							cin.ignore ( INT_MAX , '\n' ) ;
	
						}
				
						sum *= num ;
					}
				
					cout << "Product of all " << digits << " digits is " << sum ;
				
					break ; 
				
				case '4' :
				
					cout << "Please enter number of digits : " ;
				
					while ( ! ( cin >> digits ) || digits < 2 )
	
					{
	
						cout << "Number of digits cannot be less than 2 or a character!!" ;
						Sleep ( 2000 ) ;
						system ( "CLS" ) ;
						cout <<"Please enter number of digits : " ;
						cin.clear() ;
						cin.ignore ( INT_MAX , '\n' ) ;
	
					}
				
					for ( i = 1 ; i <= digits ; i++ )
					{
						cout << i << ".Enter number : " ;
	
						while ( ! ( cin >> num ) )
	
						{
	
							system ("CLS") ;
							cout << i << ".Enter number : " ;
							cin.clear() ;
							cin.ignore ( INT_MAX , '\n' ) ; 
	
						}
	
						sum += num ;
	
					}
				
					cout << "Average of all " << digits << " digits is " << ( ( float ) sum / digits ) ;
				
					break ; 
				
				case '5' :
				
					cout << "Enter first number : " ;
					cin >> num_1 ;
	
					cout << "Enter second number : " ;
					cin >> num_2 ;
				
					cout << "Division of 2 numbers is : " << ( ( float ) num_1 / num_2 ) ;
				
					break ;
				
				case '6' :
				
					check = false ;
	
					return 0 ;
					
			}
		
		
			Sleep(5000) ;
	
			system ("CLS") ;
	
			while ( choice != 'y' || choice != 'n' )
	
			{
			
				cout << "Do you want to continue (y/n) " ;
	
				choice = getch() ;
		
				if ( choice == 'y' )
	
				{
	
					check = true ;
					break ;	
	
				}
				
				else if ( choice == 'n' )
	
				{
	
					check = false ;
					break ;
	
				}
				
				system ("CLS") ;
				
			} 
			
		}
		
		system ("CLS") ;		
	}
}
