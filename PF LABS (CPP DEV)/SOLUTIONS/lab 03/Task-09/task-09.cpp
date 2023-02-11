#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

main ()
{//************************************************************************************Variable decleration*****************************************************

	double gross_1 , gross_2 , gross_3 , x , y , z , h , i ;

	a:
	cout << "Please enter gross sale for 1st person : " ;
	
	if ( ! ( cin >> gross_1 ) )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "No character please!!" ;
		getch () ;
		system ("CLS") ;
		goto a ;
	}

	if ( gross_1 < 0 )
	{
		cout << "sales cannot be negative!!" ;
		getch () ;
		system ("CLS") ;
		goto a ;
	}
	

	b:
	cout << "Please enter gross sale for 1st person : " ;
	
	if ( ! ( cin >> gross_2 ) )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "No character please!!" ;
		getch () ;
		system ("CLS") ;
		goto b ;
	}
	
	if ( gross_2 < 0 )
	{
		cout << "sales cannot be negative!!" ;
		getch () ;
		system ("CLS") ;
		goto b ;
	}
	
	c:
	cout << "Please enter gross sale for 3rd person : " ;
	
	if ( ! ( cin >> gross_3 ) )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "No character please!!" ;
		getch () ;
		system ("CLS") ;
		goto c ;
	}
	
	if ( gross_3 < 0 )
	{
		cout << "sales cannot be negative!!" ;
		getch () ;
		system ("CLS") ;
		goto c ;
	}
	system("CLS") ;
	
	x = gross_1 * 60 / 100 ;
	y = gross_2 * 60 / 100 ;
	z = gross_3 * 60 / 100 ;
	
	cout << "1st person earning " << x + 200 << " Rs." << endl ;
	cout << "2nd person earning " << y + 200 << " Rs." << endl ;
	cout << "3rd person earning " << z + 200 << " Rs." << endl ;
	
	getch() ;
	system("CLS");
	
	cout << "Average gross is " << ( gross_1 + gross_2 + gross_3 ) / 3 << " Rs." << endl ; 
	
	if ( gross_1 > gross_2 && gross_1 > gross_3 )
	{
		h = gross_1 ;
		cout << "Maximum gross is " << h << " Rs. " << endl ;
	}
	
	else if ( gross_2 > gross_1 && gross_2 > gross_3 )
	{
		h = gross_2 ;
		cout << "Maximum gross is " << h << " Rs. " << endl ;
	}
	
	else if ( gross_3 > gross_1 && gross_3 > gross_2 )
	{
		h = gross_3 ;
		cout << "Maximum gross is " << h << " Rs. " << endl ;
	}

	else 
	{
		cout << "for max all grosess are equal!! " << endl ;
	}
	
	
	
	if ( gross_1 < gross_2 && gross_1 < gross_3 )
	{
		i = gross_1 ;
		cout << "Minimum gross is " << i << " Rs." << endl ;
	}
	
	else if ( gross_2 < gross_1 && gross_2 < gross_3 )
	{
		i = gross_2 ;
		cout << "Minimum gross is " << i << " Rs." << endl ;
	}
	
	else if ( gross_3 < gross_1 && gross_3 < gross_2 )
	{
		i = gross_3 ;
		cout << "Minimum gross is " << i << " Rs." << endl ;
	}

	else
	{
		cout << "no min, all grosess are equal!! " << endl ;
	}
	
	return 0 ;
	
	
}
