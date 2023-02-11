#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int average () 
{
	s:
		
	int n , i;
    double num , sum , average;
    cout << " Enter the numbers of data: ";
    cin >> n;
    if ( n >= 2 )
    {
	for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num ;
        sum += num ;
    }
    average = sum / n ;
    system ("CLS") ;
    cout << "Average of "<< i <<" numbers is = " << average ;
	}
	else 
	{
		cout << "Please enter number greater than 2 !!!! " ;
		getch() ;
		system("CLS") ;
		goto s ;
	}
}

int addition ()
{
	ad: 
	
	int n , i;
    double num , sum ;
    cout << " Enter the numbers of data: ";
    cin >> n;
    if ( n >= 2 )
    {
	for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num ;
        sum += num ;
    }
    system ("CLS") ;
    cout << "Sum of "<<i<<" numbers is = " << sum ;
	}
	else 
	{
		cout << "Please enter number greater than 2 !!!!" ;
		getch() ;
		system("CLS") ;
		goto ad ;
	}

}

int sumaverage () 
{
	ad:
		
	int n , i;
    double num , sum , average;
    cout << " Enter the numbers of data: ";
    cin >> n;
	
	if ( n >= 2 )
    {
	for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num ;
        sum += num ;
    }
    average = sum / n ;
    system ("CLS") ;
    cout << "Average of " << i << " numbers is = " << average << endl << endl ;
    cout << "Sum of " << i << " numbers is = " << sum ;
	}
	else 
	{
		cout << "Please enter number greater than 2 !!!! " ;
		getch() ;
		system("CLS") ;
		goto ad ;
	}


}

int difference ()
{
	double num_1 , num_2 , num_3 ;
	cout << "Please enter first no. = " ;
 	cin >>num_1;
	cout << "Please enter second no. = " ;
	cin >> num_2 ;
	num_3 = num_1 - num_2 ;
	system ("CLS") ;
	cout << "Your answer is = " << num_3 << endl ;
}

int product ()
{
	p:
		
	int n , i;
    double num , product=1;
    cout << " Enter the numbers of data: ";
    cin >> n;
    if ( n >= 2 ) 
	{
	for(i = 0; i < n; i++)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num ;
        product *= num ;
    }
    system ("CLS") ;
    cout << "Product of " << i << " numbers is : " << product ;
	}
	else 
	{
		cout << "Please enter number greater than 2 !!!! " ;
		getch() ;
		system("CLS") ;
		goto p ;
	}
}

int division ()
{
	double num_1 , num_2 , num_3 ;
	cout << "Please enter dividend = " ;
 	cin >>num_1;
	cout << "Please enter divisor = " ;
	cin >> num_2 ;
	num_3 = num_1 / num_2 ;
	system ("CLS") ;
	cout << "Your answer is = " << num_3 << endl ;
	
	
}

int main ()
{
	cout << "For sum , subtraction , product , division , average or average + sum " << endl << endl ;
	cout << "Please enter sum , difference , product , division , average or sum_average respectively " << endl << endl ;
	cout << "Press any key to continue !! " ;
	
	getch () ;
	system ("CLS") ;
	
	a:

	string calculation ;
	cout << "What calcualtion do you want : ";
	cin >> calculation ;
	system ("CLS") ;
	
	if (calculation == "sum"){
		addition ();
	}
	 
	else if( calculation == "average"){
		average();
	}
	
	else if( calculation == "product"){
		product(); 
	}
	
	else if ( calculation == "sum_average"|| calculation=="average_sum"){
		sumaverage () ;
	}	
	else if ( calculation == "division"){
		division () ;
	}
	
	else if ( calculation == "subtraction" )
	{
		difference() ;
	}
	else {
		cout << "Please enter sum or product or average or subtraction or sum_average!!!";
	}
	getch() ;
	system ("CLS");
	goto a;
	
} 
