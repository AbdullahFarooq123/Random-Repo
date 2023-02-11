#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <stdlib.h>
#define pi 3.14

using namespace std;

int main()
{
	a:
	double no_of_shares = 1000 ; 
	double buying_price_per_stock = 32.87 , commission = 2 , bought , sold , selling_price_per_stock = 0.35
	 , commission_price_1 , commission_price_2 , 
		   profit ;
	
	commission_price_1 = no_of_shares * buying_price_per_stock * ( commission / 100 ) ;
	bought = no_of_shares * buying_price_per_stock ;
	
	commission_price_2 = no_of_shares * selling_price_per_stock * (commission / 100) ; 
	sold = no_of_shares * selling_price_per_stock ;
	
	profit = sold - ( commission_price_1 + commission_price_2 ) ;
	
	cout << "Kathryn paid for stock : " << bought << " Rs " << endl << endl ;
	cout << "Commission Kathryn paid her broker when she bought the stock : " << commission_price_1 << " Rs " << endl << endl ;
	cout << "Kathryn sold the stock for : " << sold << " Rs " << endl << endl ; 
	cout << "Commission Kathryn paid her broker when she sold the stock : " << commission_price_2 << " Rs " << endl << endl ;
	cout << "Profit Kathryn made : " << profit << " Rs " << endl << endl ;
	
	getch() ;
	system ("CLS") ;
	cout << "As the profit is in minus so Kathryn was at loss!!!!!! " << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl  << endl ;
	
	return 0 ;
}
	
