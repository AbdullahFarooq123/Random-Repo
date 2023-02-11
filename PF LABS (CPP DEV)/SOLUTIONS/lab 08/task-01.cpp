#include<iostream>
#include<iomanip>

void showIntro () ;
double getCups() ;
double cups_to_ounces( double ) ;

using namespace std ;

int main ()

{	

	showIntro() ;
	cout << "The number of ounces are : " << getCups () ;
				
}

void showIntro ()

{
	
	cout << setfill('*') << setw(60) ;
	cout << "THE PROGRAM CALCULATES NUMBER " ;
	cout << left << setfill('*') << setw(50) ;
	cout << "OF OUNCES IN THE CUPS" ;
	cout << endl ;
	
}

double getCups ()

{
	
	int cups ;
	
	cout << "Please enter number of cups : " ;
	cin >> cups ;
	
	return cups_to_ounces ( cups ) ;
	
}

double cups_to_ounces ( double cups )

{
	
	return cups * 8 ;
	
}


