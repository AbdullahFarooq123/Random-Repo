#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() 
{
	a:
	
	double loan_ammount , rate , monthly_payment ;  
	int number_of_payments ;
	
	
	cout << "Enter the Loan Amount: " ;
	cin >> loan_ammount ;
	
	cout << "Enter the Monthly Interest Rate : " ;
	cin >> rate ;
	
	rate = rate / 100 ;
	
	cout << "Enter the desired number of payments: " ;
	cin >> number_of_payments ;
	
	monthly_payment = rate * pow ( 1 + rate , number_of_payments ) / ( pow ( 1 + rate , number_of_payments ) - 1 )  * loan_ammount ;
	
	system ("CLS") ;
	
	cout << "Loan amount: " << setw ( 2 ) << fixed << setprecision ( 2 ) << loan_ammount << " $ " << endl << endl ;
	cout << "Monthly interest rate: " << rate * 100 << " %" << endl << endl ;
	cout << "Number of payments: " << setw ( 2 ) << fixed << setprecision ( 2 ) << number_of_payments << endl << endl ;
	cout << "Monthly payment: " << setw ( 2 ) << fixed << setprecision ( 2 ) << monthly_payment << " $ " << endl << endl ;
	cout << "Amount need to pay back: " << setw ( 2 ) << fixed << setprecision ( 2 ) << monthly_payment * number_of_payments << " $ " << endl <<endl ;
	cout << "Interest paid: " << setw ( 2 ) << fixed << setprecision ( 2 ) << ( monthly_payment * number_of_payments ) - loan_ammount << " $ " << endl << endl ;
	
	getch () ;
	
	system ("CLS") ;

	goto a ;

}
