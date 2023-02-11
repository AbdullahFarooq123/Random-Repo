#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	double customers=12467;
	float percent_of_sold_drink=14;
	float drinks_purchased=customers*percent_of_sold_drink/100;
	float citrus_selling_percentage=64;
	float citrus_drinks_purchased=drinks_purchased*citrus_selling_percentage/100;
	cout<<"Total customers surveyed="<<customers<<endl<<endl;
	cout<<"Percentage of customers purchased drink="<<percent_of_sold_drink<<"%"<<endl<<endl;
	cout<<"Customers purchased drink=Total customers * Percentage of customers purchased drink"<<endl<<endl;
	cout<<"Customers purchased drink="<<customers<<" * "<<percent_of_sold_drink<<"%"<<endl<<endl;
	cout<<"Customers purchased drink="<<drinks_purchased<<endl<<endl;
	cout<<"Percentage of customers prefered citrus="<<citrus_selling_percentage<<endl<<endl;
	cout<<"Customers preffered citrus=Customers purchased drink * Percentage of customers prefered citrus"<<endl<<endl;
	cout<<"Customers preffered citrus="<<drinks_purchased<<" * "<<citrus_selling_percentage<<"%"<<endl<<endl;
	cout<<"Customers preffered citrus="<< citrus_drinks_purchased<<endl;
	getch();
	return 0;
	
}
