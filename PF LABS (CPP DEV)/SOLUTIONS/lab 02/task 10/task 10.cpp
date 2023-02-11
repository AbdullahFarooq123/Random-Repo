#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()

{
	a:
		
	int child_tickets , adult_tickets , above_60_tickets ;
	int child = 250 , adult = 500 , gross , net , paid ;
	float adult_60_plus ;
	string movie_name ;
	
	adult_60_plus = adult * 10 / 100 ;
	
	cout << "Please enter movie name : " ;
	cin >> movie_name ;
	cout << "Please enter child ticket : " ;
	cin >> child_tickets ;
	cout << "Please enter adult tickets : " ;
	cin >> adult_tickets ;
	cout << "Please enter adults (above 60) tickets : " ;
	cin >> above_60_tickets ;
	system ("CLS") ;
	
	gross = child * child_tickets + adult * adult_tickets + above_60_tickets * adult_60_plus ;
	
	net = gross * 20 / 100 ;
	
	paid = gross - net ; 
	
	cout << "Movie name                           " << movie_name << endl ;
	cout << "Adult tickets sold                   " << adult_tickets << endl ;
	cout << "Child tickets sold                   " << child_tickets << endl ;
	cout << "Above 60 adult tickets sold          " << above_60_tickets << endl ;
	cout << "Gross profit                         " << gross << " Rs " << endl ;
	cout << "Net profit                           " << net << "  Rs " << endl ;
	cout << "Ammount paid to distributor          " << paid << " Rs " <<endl ;
	
	getch() ;
	
	system ("CLS") ;
	
	goto a ;
	
	
}
	
	
