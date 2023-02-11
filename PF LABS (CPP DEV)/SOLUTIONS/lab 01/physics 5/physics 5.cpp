#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	//Question:
	//Find the time period of simple pendulum 1m long where g=10m per second square.
	char symbol=251;
	float length=1.0;
	float gravitational_acc=10.0;
	float pi=3.14;
	float part_1=2*pi;
	float part_2=length/gravitational_acc;
	float part_3=sqrt(part_2);
	double time_period=part_1 * part_3;
	cout<<"Given: \n\n";
	cout<<"Length="<<length<<"m \n";
	cout<<"g="<<gravitational_acc<<"m per sec \n\n";
	cout<<"To Find: \n\n";
	cout<<"Time Period=? \n\n";
	cout<<"Sol: \n\n";
	cout<<"Time Period=2*pi ("<< symbol<<"l/g) \n";
	cout <<"Time Period=2*"<<pi<<"("<<symbol<<length<<"/"<<gravitational_acc<<")"<<endl;
	cout<<"Time Period="<<setprecision(4)<<time_period<<" sec \n";
	getch();
	return 0;
}
