#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	//Question:
    //Calculate distace covered by a car travelling at 62m per sec in time of 10 sec.
	int Velocity=62;
	int time=10;
	int distance=Velocity * time;
	cout<<"Given: \n\n";
	cout<<"Velocity of the car="<<Velocity<<" m per second \n";
	cout<<"Time travelled by car="<<time<<" sec \n\n";
	cout<<"To find: \n\n";
	cout<<"Distance=? \n\n";
	cout<<"Sol: \n\n";
	cout<<"Distance= velocity * time \n";
	cout<<"Distance="<<Velocity<<" * "<<time<<endl;
	cout<<"Distance="<<distance<<" m ";
	getch();	
	return 0;
	
}
