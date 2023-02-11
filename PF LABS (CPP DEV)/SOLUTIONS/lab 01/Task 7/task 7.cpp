#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int weekly_pay=5700;
	int pay_period=26;
	int annual_pay=weekly_pay * pay_period;
	cout<<"Two weeks pay="<<weekly_pay<<" Rs"<<"\n\n";
	cout<<"Payperiods in a year="<<pay_period<<"\n\n";
	cout<<"Annual Pay=Two weeks pay * payperiods in a year \n\n";
	cout<<"Annual Pay=5700 * 26 \n\n";
	cout<<"Annual Pay="<<annual_pay<<" Rs";
	getch();
	return 0;
}

