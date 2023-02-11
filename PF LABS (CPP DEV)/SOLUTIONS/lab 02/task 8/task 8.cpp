#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()

{
	cout << " WE ONLY HAVE 10 SEATS IN CLASS A, 30 SEATS IN CLASS B AND 100 IN CLASS C. " ;
	
	getch() ;
	
	system ("CLS") ;
	
	first:
	
	int class_A , class_B , class_C , revenue , tickets ;
	
	cout << "Tickets for \"CLASS A\" : " ;
	cin >> class_A ;
	
	system ("CLS") ;
	
	if ( class_A > 10 ) {
	
	cout << "Sorry we only have 10 seats in this class \n " ;
	cout << "Press any key to continue!!! " ;
	
	getch() ;
	
	system ("CLS") ;
	
	goto first ;
	
	}
	
	middle:
	
	cout << "Tickets for \"CLASS B\" : " ;
	cin >> class_B ;
	
	system ("CLS") ;
	
	if ( class_B > 30 ) {
	
	cout << "Sorry we only have 30 seats in this class \n " ;
	cout << "Press any key to continue!!! " ;
	
	getch() ;
	
	system ("CLS") ;
	
	goto middle ;
	
	}
	
	last:
	
	cout << "Tickets for \"CLASS C\" : " ;
	cin >> class_C ;
	
	system ("CLS") ;
	
	if ( class_C > 100 ) {
	
	cout << "Sorry we only have 100 seats in this class \n " ;
	cout << "Press any key to continue!!! " ;
	
	getch() ;
	
	system ("CLS") ;
	
	goto last ;
	
	}
	
	tickets = class_A + class_B + class_C ;
	
	class_A = class_A * 2000 ;
	class_B = class_B * 1000 ;
	class_C = class_C * 500 ;
	
	revenue = class_A + class_B + class_C ;
	
	system ("CLS") ;
	
	cout << "Tickets sold : " << tickets <<endl << endl ;
	cout << "Revenue generated : " << revenue << " Rs " ;
	
	getch() ;
}
