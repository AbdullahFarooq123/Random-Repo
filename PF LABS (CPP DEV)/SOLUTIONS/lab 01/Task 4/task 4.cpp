#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
	float force=172.5,area=27.5,pressure=force / area;
	cout<<"Force="<<force<<" N \n\n";
	cout<<"Area="<<area<<" m \n\n";
	cout<<"Pressure=Force/Area \n\n";
	cout<<"Pressure="<<force<<"/"<<area<<" \n\n";
	cout<<"Pressure="<<setprecision(3)<<pressure<<" N/m";
	getch();
	return 0;
}
