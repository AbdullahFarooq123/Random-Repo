#include<iostream>
#include<conio.h>
using namespace std;
main()
{ 
 		//Question
 		//Find the force applied on the body of mass 10Kg moving with acceleration 30m per sec square.
 		int mass=10;
 		int acceleration=30;
 		int Force=mass * acceleration;
 		cout<<"Given: \n\n";
 		cout<<"Mass="<<mass<<"Kg \n";
 		cout<<"Acceleration="<<acceleration<<" m per sec square \n\n";
 		cout<<"To Find: \n\n";
 		cout<<"Force=? \n\n";
 		cout<<"Sol: \n\n";
 		cout<<"Force=Mass * Acceleration \n";
 		cout<<"Force="<<mass<<" * "<<acceleration<<endl;
 		cout<<"Force="<<Force<<" N" <<endl;
 		return 0;
}
