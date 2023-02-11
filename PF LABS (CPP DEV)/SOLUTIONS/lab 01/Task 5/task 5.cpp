#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
	float percentage=62;
	int company_sales=680;
    float sales=company_sales * percentage/100;
    cout<<"Percentage of total sales="<<percentage<<"%"<<endl<<endl;
	cout<<"Company sales this year="<<company_sales<<" million \n\n";
	cout<<"Company generated from sales=Total sales * 62% \n\n";
	cout<<"Company generated from sales="<<company_sales<<" * 62% \n\n";
	cout<<"Company generated from sales="<<sales<<" millions";
	getch();
	return 0;
}
