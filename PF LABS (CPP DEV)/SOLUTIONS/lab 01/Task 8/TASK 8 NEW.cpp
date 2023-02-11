#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
	float level_in_ft=656.2;
	float level_in_m=level_in_ft*3.03;
	float initial_level=level_in_m*1000;
	float rate=1.5;
	float five_year_rate=rate*5;
	float seven_year_rate=rate*7;
	float ten_year_rate=rate*10;
	float five_year_increase=five_year_rate+initial_level;
	float seven_year_increase=seven_year_rate+initial_level;
	float ten_year_increase=ten_year_rate+initial_level;
	cout<<"Initial sea level(In foot)="<<level_in_ft<<"feet \n\n";
	cout<<"Initial sea level(in m)=Initial sea level(In foot) * 3.03 \n\n";
	cout<<"Initial sea level(in m)="<<level_in_ft<<" * 3.03 \n\n";
	cout<<"Initial sea level(in m)="<<level_in_m<<"m \n\n";
	cout<<"Initial sea level(in mm)="<<setprecision(10)<<initial_level<<"mm \n\n";
	cout<<"Level increment in 5 years=(5 * rate per year) + Initial sea level(in mm)"<< endl<<endl;
	cout<<"Level increment in 5 years=(5 * "<<rate<<"mm) + "<<initial_level<<"mm"<<endl<<endl;
	cout<<"Level increment in 5 years="<<five_year_increase<<"mm"<<endl<<endl;
	cout<<"Level increment in 7 years=(7 * rate per year) + Initial sea level(in mm)"<<endl<<endl;
	cout<<"Level increment in 7 years=(7 * "<<rate<<"mm) + "<<initial_level<<"mm"<<endl<<endl;
	cout<<"Level increment in 7 years="<<seven_year_increase<<"mm"<<endl<<endl;
	cout<<"Level increment in 10 years=(10 * rate per year) + Initial sea level(in mm)"<<endl<<endl;
	cout<<"Level increment in 10 years=(10 * "<<rate<<"mm) + "<<initial_level<<"mm"<<endl<<endl;
	cout<<"Level increment in 10 years="<<ten_year_increase<<"mm"<<endl<<endl;
	getch();
    return 0;
}
