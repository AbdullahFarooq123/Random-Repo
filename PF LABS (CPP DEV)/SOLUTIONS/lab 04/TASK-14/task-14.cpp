#include <iostream>
#include <conio.h>
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
		
		double annual_interest , initial_balance , months , monthly_interest , deposited_ammount , ammount , ammount_withdrawn , remaining ; 
	double deposits = 0 , withdraws = 0  , balance ;
	
	cout << "Please enter annual interest rate (in percent ) : " ;
	while ( ! ( cin >> annual_interest ) )
	
	{
		
		cout << "No character please!" ;
		cin_clear () ;
		cout << "Please enter annual interest rate ( in percent ) : " ;
		
	}
	
	cout << "Please enter the starting balance (in Rs) : " ;
	while ( ! ( cin >> initial_balance ) || initial_balance < 1 )
	
	{
		
		cout << "No character or negative balance ! " ;
		cin_clear () ;
		cout << "Please enter the startting balance ( in Rs ) : " ;
		
	}
	
	cout << "Please enter the number of months passed : " ;
	while ( ! ( cin >> months ) )
	
	{
		
		cout << "Months cannot be less than 1 or a character ! " ;
		cin_clear() ;
		cout << "Please enter the number of months passed : " ;
		
	}
	
	monthly_interest = annual_interest / (12.0/100) ;
	
	for ( int i = 1 ; i <= months ; i++ )
	
	{
		
		cout << "Please enter the ammount deposited (in Rs) : " ;
		while ( ! ( cin >> ammount ) || ammount < 0 )
		
		{
			
			cout << "No character or a negative int ! " ;
			cin_clear () ;
			cout << "Please enter the ammount deposited ( in Rs ) : " ;
			
		}
		
		deposits = deposits + ammount ;
		
		deposited_ammount = balance + ammount ;
		
		if ( deposited_ammount < 0 )
		
		{
			
			cout << "Account withdrawn ! " ;
			return 0 ;
			
		}
		
		cout << "Please enter the ammount withdrawn (in Rs) : " ;
		while ( ! ( cin >> ammount_withdrawn ) || ammount_withdrawn < 0 )
		
		{
			
			cout << "No character or a negative int ! " ;
			cin_clear () ;
			cout << "Please enter ammount withdrawn (in Rs) : " ;
			
		}
		
		withdraws = withdraws + ammount_withdrawn ;
		
		remaining = deposited_ammount - ammount_withdrawn ;
		
		balance += ( remaining * monthly_interest ) ;
		
		if ( remaining < 0 || balance < 0 )
		
		{
			
			cout << "Account withdrawn ! " ;
			return 0 ;
			
		}
		
	}
	
	cout << "The ending balance is : " << balance << " Rs." << endl ;
	cout << "The total ammount of deposits is : " << deposits << " Rs." << endl ;
	cout << "The total ammount of withdraw's is : " << withdraws << " Rs." << endl ;
	
	system("pause") ;
	system("cls") ;
	
	flag = continuationLoop () ;
		
	}
	
	
}
