#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	//Question
	//The area of metallic bar is 1x1cm.Its length is 50cm.A force of 10000N stretches it by 0.25cm.Find stress.
	int area=1;
	int length=50;
	int force=10000;
	float changed_length=0.25;
	float length_in_m=50.0/100.0;
	float area_in_m=1.0/10000.0;
	float changed_length_in_m=0.25/100.0;
	float stress=force/area_in_m;
	float strain=changed_length_in_m/length_in_m;
	cout<<"Given: \n\n";
	cout<<"Area(in cm)="<<area<<" cm square \n";
	cout<<"Area(in m)="<<setprecision(5)<<area_in_m<<"m square \n";
	cout<<"Length(in cm)="<<length<< "cm \n";
	cout<<"Length(in m)="<<setprecision(5)<<length_in_m<<" m \n";
	cout<<"Changed Length(in cm)="<<changed_length<<" cm \n";
	cout<<"Changed Length(in m)="<<setprecision(5)<<changed_length_in_m<<" m \n\n";
	cout<<"To Find: \n\n";
	cout<<"Stress=? \n";
	cout<<"Strain=? \n\n";
	cout<<"Sol: \n\n";
	cout<<"Stress= Force / Area(in m) "<<"                                Strain= Changed length(in m) / Length \n";
	cout<<"Stress="<<force<<" / "<<area_in_m<<"                                      Strain="<<changed_length<<" / "<<length_in_m<<endl;
	cout<<"Stress="<<setprecision(50)<<stress<<" N per m square"<<"                            Strain="<<setprecision(5)<<strain<<" no units" <<endl;
	getch();
	return 0;

}
