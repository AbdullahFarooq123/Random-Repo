#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	//Question
	//The current passing through a resistor with resistance 50ohm is 10A.Find voltage accross it.
	int current=10;
	int resistance=50;
	float voltage=current * resistance;
	cout<<"Given: \n\n";
	cout<<"Current="<<current<<" A \n";
	cout<<"Resistance="<<resistance<<" ohm \n\n";
	cout<<"To  find: \n\n";
	cout<<"Voltage=? \n\n";
	cout<<"Sol: \n\n";
	cout<<"Voltage=Current * Resistance \n";
	cout<<"Voltage="<<current <<" * "<<resistance<<endl;
	cout<<"Voltage="<<voltage<<" V \n";
	getch();
	return 0;
}
