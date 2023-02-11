#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float acres=2.3;
	int square_feet=389767;
	float total_acres=acres*square_feet;
	cout<<"1 acre = 43560 sqft" <<endl<<endl;
	cout <<"1/43560 acre = 1 sqft"<< endl<<endl;
	cout<<"1 sqft = "<<acres<<" acre" <<endl<<endl;
	cout <<"1 * "<<square_feet<< " sqft = "<<acres<<" * "<<square_feet<<" acre"<<endl<<endl;
	cout <<square_feet<<" sqft = "<<total_acres<<" acre";
	getch();
	return 0;
}
