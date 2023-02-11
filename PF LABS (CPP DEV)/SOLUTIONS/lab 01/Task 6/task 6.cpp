#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
main()
{
	int charge=4450;
	float tax_percentage=6.75;
	int tip_percentage=15;
	float tax=charge*tax_percentage/100,total_1=tax+charge;
	float tip=total_1*tip_percentage/100;
	float total=charge+tax+tip;
	cout<<"Meal cost="<<charge<<" Rs"<<"\n\n";
	cout<<"Tax ammount="<<setprecision(3)<<tax<<" Rs"<<"\n\n";
	cout<<"Tip ammount="<<setprecision(3)<<tip<<" Rs"<<"\n\n";
	cout<<"Total Bill=Meal Cost+Tax ammount+Tip ammount \n\n";
	cout<<"Total Bill="<<setprecision(6)<<total<<" Rs";
	getch();
	return 0;
}
