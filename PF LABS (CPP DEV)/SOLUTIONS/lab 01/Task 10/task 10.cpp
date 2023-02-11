#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int share=600;
	float price_per_share=21.77;
	float total_price=share * price_per_share;
	float tax_percentage=2;
	float tax=tax_percentage/100.0*total_price;
	float total=tax+total_price;
	cout<<"Ammount paid for stock=No of shares * Price per share"<<endl<<endl;
	cout<<"Ammount paid for stock="<<share<<" * "<<price_per_share<<" Rs "<<endl<<endl;
	cout <<"Ammount paid for stock="<<total_price<<" Rs"<<endl<<endl;
	cout<<"Comission ammount=Tax percentage * Ammount paid for stock"<<endl<<endl;
	cout<<"Commision ammount="<<tax_percentage<<" * "<<total_price<<" Rs"<<endl<<endl;
	cout<<"Commision ammount="<<tax<<" Rs"<<endl<<endl;
	cout<<"Total ammount paid=Stock ammount + Commision ammouunt"<<endl<<endl;
	cout<<"Total ammount paid="<<total_price<<" Rs"<<" + "<<tax<<" Rs"<<endl<<endl;
	cout<<"Total ammount paid="<<total<<" Rs";
	getch();
	return 0;
}
