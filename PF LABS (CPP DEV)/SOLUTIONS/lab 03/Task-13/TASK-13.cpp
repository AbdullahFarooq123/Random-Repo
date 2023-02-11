#include <iostream>//******************************************************************Libraries****************************************************************
#include <cmath>
#include <conio.h>
#include <stdlib.h>
#define pi 3.14

using namespace std ;

int circle()
{
	double radius , area ; 
	a:
	cout << "Please enter radius of circle : " ;	
							
	if ( ! ( cin >> radius ) )														//Conditon for if user enters a character
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integral value " ;
		getch() ;
		system ("CLS") ;
		goto a ;
	}
	area = pi * pow ( radius , 2 ) ;
	cout << "Area of circle is " << area ;
	
}

int rectangle()
{
	double length , width , area ; 
	b:
	cout << "Please enter length of rectangle : " ;
	if ( ! ( cin >> length ) )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integral value " ;
		getch() ;
		system ("CLS") ;
		goto b ;
	}
	
	c:
	cout << "Please enter width of rectangle : " ;
	if ( ! ( cin >> width ) )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integral value " ;
		getch() ;
		system ("CLS") ;
		goto c ;
	}
	area = length * width ;
	cout << "Area of rectangle is " << area ;
}

int triangle()
{
	double base , height , area ;
	
	d:
	cout << "Please enter base of triangle : " ;
	if ( ! ( cin >> base ) )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integral value " ;
		getch() ;
		system ("CLS") ;
		goto d ;
	}
	
	e:
	cout << "Please enter height of triangle : " ;
	if ( ! ( cin >> height ) )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integral value " ;
		getch() ;
		system ("CLS") ;
		goto e ;
	}
	
	area = base * height * 0.5 ;
	
	cout << "Area of triangle is : " << area ;
	
}

int cylinder()
{
	double radius , height , area ; 
	
	f:
	cout << "Please enter radius of cylinder : " ;
	if ( ! ( cin >> radius ) || radius <= 0 )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integral value or avoid character " ;
		getch() ;
		system ("CLS") ;
		goto f ;
	}
	
	g:
	cout << "Please enter height of cylinder : " ;
	if ( ! ( cin >> height ) || height <= 0 )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integral value or avoid character " ;
		getch() ;
		system ("CLS") ;
		goto g ;
	}
	
	area = 2 * pi * radius * ( radius + height) ;
	
	cout << "Area of cylinder is : " << area ;
	
}

int trapezoid()
{
	double  a , b , height , area ; 
	
	h:
	cout << "Please enter length of 1st parallel side : " ;
	if ( ! ( cin >> a ) )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integral value " ;
		getch() ;
		system ("CLS") ;
		goto h ;
	}
	
	i:
	cout << "Please enter length of 2nd parallel side : " ;
	if ( ! ( cin >> b ) )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integral value " ;
		getch() ;
		system ("CLS") ;
		goto i ;
	}
	
	j:
	cout << "Please enter height of tapezoid : " ;
	if ( ! ( cin >> height ) )
	{
		cin.clear() ;
		cin.ignore ( INT_MAX , '\n' ) ;
		cout << "Please enter and integral value " ;
		getch() ;
		system ("CLS") ;
		goto j ;
	}
	
	area = height * ( ( a + b ) / 2 ) ;
	
	cout << "Area of trapezoid is : " << area ;
	
	
}

main ()
{//************************************************************************************Variable decleration*****************************************************

	int n ;
	
 	do
 	{	
	cout << "********************************************Geometry Calculator*************************** " << endl << endl ;
	cout << "1. Calculate the area of Circle "    << endl ;
	cout << "2. Calculate the area of Rectangle " << endl ;
	cout << "3. Calculate the area of Triangle "  << endl ;
	cout << "4. Calculate the area of Cylinder "  << endl ;
	cout << "5. Calculate the area of Trapezoid " << endl ;
	cout << "6. Quit " << endl ;
	
	n = getch() ;
	system("CLS") ;
	cout << endl ;
	
	if ( n == '1' )
	{
		circle() ;	
	}
	
	else if ( n == '2' )
	{
		rectangle() ;
	}
	
	else if ( n == '3' )
	{
		triangle() ;
	}
	
	else if ( n == '4' )
	{
		cylinder() ;
	}
	
	else if ( n == '5' )
	{
		trapezoid() ;
	}
	
	else if ( n >= 7 )
	{
		cout << endl << "There is no case greater than 6 " << endl ;
		getch ();
		system("CLS") ;
	}
	getch();
	system ("CLS") ;
	
	
	
	}while ( n != '6') ;
	return 0 ;

		



}

