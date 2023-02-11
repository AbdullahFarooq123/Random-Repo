#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{ 
	cout<<"\t\t\t\t\tManual \n\n";
	cout<<"\t\t\t\tThe program calculates from 2 numbers till 10 numbers \n\n";
	cout<<"\t\t\t\tSo everything you enter (not the above) will be a syntax error \n\n";
	cout<<"\t\t\t\tAfter reading the manual press any key to continue!!";
	getch();
	system ("CLS");
	
	float sum,subtraction,multiplication,average;
	float num,num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
	int s;
	cout<<"Input no. of numbers you want to calculate=";
	cin>>num;
	system ("CLS");
	
	
																		//condition 1
	if(num==2){
	cout<<"Please enter number 1=";
	cin>>num1;
	cout<<endl;
	cout<<"Please enter number 2=";
	cin>>num2;
	cout<<endl;
	system ("CLS");
																		//calculations
	sum=num1+num2;
	subtraction=num1-num2;
	multiplication=num1*num2;
	average=(num1+num2)/2;
																		//queries
	cout<<"What calculation do you want? \n";
	cout<<"For sum press 1 \n";
	cout<<"For difference press 2 \n";
	cout<<"For multiplication press 3 \n";
	cout<<"For average press 4 \n";
	cout<<"For all of above press 5 \n";
	cout<<"Please enter= ";
	cin>>s;
	cout<<endl<<endl;
	system ("CLS");
																	//conditions
	if(s==1){
	cout<<"The sum is= "<<setprecision(50)<<sum;
	}
	else if(s==2){
	cout<<"The difference is= "<<setprecision(50)<<subtraction;
	}
	else if(s==3){
	cout<<"The product is= "<<setprecision(50)<<multiplication;
	}
	else if(s==4){
	cout<<"The average is= "<<setprecision(50)<<average;
	}
	else if(s==5){
	cout<<"The sum is= "<<setprecision(50)<<sum<<endl<<endl;
	cout<<"The difference is= "<<setprecision(50)<<subtraction<<endl<<endl;
	cout<<"The product is= "<<setprecision(50)<<multiplication<<endl<<endl;
	cout<<"The average is= "<<setprecision(50)<<average<<endl<<endl;
	}
	else{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tsyntax error";
	}
    }
    
	
																		//condition 2
	else if(num==3)
	{
	cout<<"Please enter number 1=";
	cin>>num1;
	cout<<"Please enter number 2=";
	cin>>num2;
	cout<<"Please enter number 3=";
	cin>>num3;
	cout<<endl;
	system ("CLS");
																		//calculations
	sum=num1+num2+num3;
	subtraction=num1-num2-num3;
	multiplication=num1*num2*num4;
	average=(num1+num2+num3)/3;
																   		//queries
	cout<<"What calculation do you want? \n";
	cout<<"For sum press 1 \n";
	cout<<"For difference press 2 \n";
	cout<<"For multiplication press 3 \n";
	cout<<"For average press 4 \n";
	cout<<"For all of above press 5 \n";
	cout<<"Please enter= ";
	cin>>s;
	cout<<endl<<endl;
	system ("CLS");
																 		//conditions
	if(s==1){
	cout<<"The sum is= "<<setprecision(50)<<sum;
	}
	else if(s==2){
	cout<<"The difference is= "<<setprecision(50)<<subtraction;
	}
	else if(s==3){
	cout<<"The product is= "<<setprecision(50)<<multiplication;
	}
	else if(s==4){
	cout<<"The average is= "<<setprecision(50)<<average;
	}
	else if(s==5){
	cout<<"The sum is= "<<setprecision(50)<<sum<<endl<<endl;
	cout<<"The difference is= "<<setprecision(50)<<subtraction<<endl<<endl;
	cout<<"The product is= "<<setprecision(50)<<multiplication<<endl<<endl;
	cout<<"The average is= "<<setprecision(50)<<average<<endl<<endl;
	}
	else{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tsyntax error";
	}
	}
	
															//condition 3
	else if(num==4)
	{
	cout<<"Please enter number 1=";
	cin>>num1;
	cout<<"Please enter number 2=";
	cin>>num2;
	cout<<"Please enter number 3=";
	cin>>num3;
	cout<<"Please enter number 4=";
	cin>>num4;
	cout<<endl;
		system ("CLS");
																	//calculations
	sum=num1+num2+num3+num4;
	subtraction=num1-num2-num3-num4;
	multiplication=num1*num2*num3*num4;
	average=(num1+num2+num3+num4)/4;
																	//queries
	cout<<"What calculation do you want? \n";
	cout<<"For sum press 1 \n";
	cout<<"For difference press 2 \n";
	cout<<"For multiplication press 3 \n";
	cout<<"For average press 4 \n";
	cout<<"For all of above press 5 \n";
	cout<<"Please enter= ";
	cin>>s;
	cout<<endl<<endl;
		system ("CLS");
																	//conditions
	if(s==1){
	cout<<"The sum is= "<<setprecision(50)<<sum;
	}
	else if(s==2){
	cout<<"The difference is= "<<setprecision(50)<<subtraction;
	}
	else if(s==3){
	cout<<"The product is= "<<setprecision(50)<<multiplication;
	}
	else if(s==4){
	cout<<"The average is= "<<setprecision(50)<<average;
	}
	else if(s==5){
	cout<<"The sum is= "<<setprecision(50)<<sum<<endl<<endl;
	cout<<"The difference is= "<<setprecision(50)<<subtraction<<endl<<endl;
	cout<<"The product is= "<<setprecision(50)<<multiplication<<endl<<endl;
	cout<<"The average is= "<<setprecision(50)<<average<<endl<<endl;
	}
	else{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tsyntax error";
	}
	}

															//condition 4
	else if(num==5)
	{
	cout<<"Please enter number 1=";
	cin>>num1;
	cout<<"Please enter number 2=";
	cin>>num2;
	cout<<"Please enter number 3=";
	cin>>num3;
	cout<<"Please enter number 4=";
	cin>>num4;
	cout<<"Please enter number 5=";
	cin>>num5;
	cout<<endl;
		system ("CLS");
															//calculations
	sum=num1+num2+num3+num4+num5;
	subtraction=num1-num2-num3-num4-num5;
	multiplication=num1*num2*num3*num4*num5;
	average=(num1+num2+num3+num4+num5)/5;
															//queries
	cout<<"What calculation do you want? \n";
	cout<<"For sum press 1 \n";
	cout<<"For difference press 2 \n";
	cout<<"For multiplication press 3 \n";
	cout<<"For average press 4 \n";
	cout<<"For all of above press 5 \n";
	cout<<"Please enter= ";
	cin>>s;
	cout<<endl<<endl;
		system ("CLS");
															//conditions
	if(s==1){
	cout<<"The sum is= "<<setprecision(50)<<sum;
	}
	else if(s==2){
	cout<<"The difference is= "<<setprecision(50)<<subtraction;
	}
	else if(s==3){
	cout<<"The product is= "<<setprecision(50)<<multiplication;
	}
	else if(s==4){
	cout<<"The average is= "<<setprecision(50)<<average;
	}
	else if(s==5){
	cout<<"The sum is= "<<setprecision(50)<<sum<<endl<<endl;
	cout<<"The difference is= "<<setprecision(50)<<subtraction<<endl<<endl;
	cout<<"The product is= "<<setprecision(50)<<multiplication<<endl<<endl;
	cout<<"The average is= "<<setprecision(50)<<average<<endl<<endl;
	}
	else{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tsyntax error";
	}
	}
	
                                                    	//condition 5
	else if(num==6)
	{
	cout<<"Please enter number 1=";
	cin>>num1;
	cout<<"Please enter number 2=";
	cin>>num2;
	cout<<"Please enter number 3=";
	cin>>num3;
    cout<<"Please enter number 4=";
	cin>>num4;
	cout<<"Please enter number 5=";
	cin>>num5;
	cout<<"Please enter number 6=";
	cin>>num6;
	cout<<endl;
		system ("CLS");
														//calculations
	sum=num1+num2+num3+num4+num5+num6;
    subtraction=num1-num2-num3-num4-num5-num6;
	multiplication=num1*num2*num3*num4*num5*num6;
	average=(num1+num2+num3+num4+num5+num6)/6;
														//queries
	cout<<"What calculation do you want? \n";
	cout<<"For sum press 1 \n";
	cout<<"For difference press 2 \n";
	cout<<"For multiplication press 3 \n";
	cout<<"For average press 4 \n";
	cout<<"For all of above press 5 \n";
	cout<<"Please enter= ";
	cin>>s;
	cout<<endl<<endl;
		system ("CLS");
														//conditions
	if(s==1){
	cout<<"The sum is= "<<setprecision(50)<<sum;
	}
	else if(s==2){
	cout<<"The difference is= "<<setprecision(50)<<subtraction;
	}
	else if(s==3){
	cout<<"The product is= "<<setprecision(50)<<multiplication;
	}
	else if(s==4){
	cout<<"The average is= "<<setprecision(50)<<average;
	}
	else if(s==5){
	cout<<"The sum is= "<<setprecision(50)<<sum<<endl<<endl;
	cout<<"The difference is= "<<setprecision(50)<<subtraction<<endl<<endl;
	cout<<"The product is= "<<setprecision(50)<<multiplication<<endl<<endl;
	cout<<"The average is= "<<setprecision(50)<<average<<endl<<endl;
	}
	else{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tsyntax error";
	}
	}
	
																//condition 6
	else if(num==7)
	{
	cout<<"Please enter number 1=";
	cin>>num1;
	cout<<"Please enter number 2=";
	cin>>num2;
	cout<<"Please enter number 3=";
	cin>>num3;
	cout<<"Please enter number 4=";
	cin>>num4;
	cout<<"Please enter number 5=";
	cin>>num5;
    cout<<"Please enter number 6=";
	cin>>num6;
	cout<<"Please enter number 7=";
	cin>>num7;
	cout<<endl;
		system ("CLS");
																	//calculations
	sum=num1+num2+num3+num4+num5+num6+num7;
	subtraction=num1-num2-num3-num4-num5-num6-num7;
	multiplication=num1*num2*num3*num4*num5*num6*num7;
	average=(num1+num2+num3+num4+num5+num6+num7)/7;
																	//queries
	cout<<"What calculation do you want? \n";
	cout<<"For sum press 1 \n";
	cout<<"For difference press 2 \n";
	cout<<"For multiplication press 3 \n";
	cout<<"For average press 4 \n";
	cout<<"For all of above press 5 \n";
	cout<<"Please enter= ";
	cin>>s;
	cout<<endl<<endl;
		system ("CLS");
																	//conditions
	if(s==1){
	cout<<"The sum is= "<<setprecision(50)<<sum;
	}
	else if(s==2){
	cout<<"The difference is= "<<setprecision(50)<<subtraction;
	}
	else if(s==3){
	cout<<"The product is= "<<setprecision(50)<<multiplication;
	}
	else if(s==4){
	cout<<"The average is= "<<setprecision(50)<<average;
	}
	else if(s==5){
	cout<<"The sum is= "<<setprecision(50)<<sum<<endl<<endl;
	cout<<"The difference is= "<<setprecision(50)<<subtraction<<endl<<endl;
	cout<<"The product is= "<<setprecision(50)<<multiplication<<endl<<endl;
	cout<<"The average is= "<<setprecision(50)<<average<<endl<<endl;
	}
	else{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tsyntax error";
	}
	
	}
	
																//condition 7
	else if(num==8)
	{
	cout<<"Please enter number 1=";
	cin>>num1;
	cout<<"Please enter number 2=";
	cin>>num2;
	cout<<"Please enter number 3=";
	cin>>num3;
	cout<<"Please enter number 4=";
	cin>>num4;
	cout<<"Please enter number 5=";
	cin>>num5;
    cout<<"Please enter number 6=";
	cin>>num6;
	cout<<"Please enter number 7=";
	cin>>num7;
	cout<<"Please enter number 8=";
	cin>>num8;
	cout<<endl;
		system ("CLS");
																//calculations
	sum=num1+num2+num3+num4+num5+num6+num7+num8;
	subtraction=num1-num2-num3-num4-num5-num6-num7-num8;
	multiplication=num1*num2*num3*num4*num5*num6*num7*num8;
	average=(num1+num2+num3+num4+num5+num6+num7+num8)/8;
																//queries
	cout<<"What calculation do you want? \n";
	cout<<"For sum press 1 \n";
	cout<<"For difference press 2 \n";
	cout<<"For multiplication press 3 \n";
	cout<<"For average press 4 \n";
	cout<<"For all of above press 5 \n";
	cout<<"Please enter= ";
	cin>>s;
	cout<<endl<<endl;
		system ("CLS");
																//conditions
	if(s==1){
	cout<<"The sum is= "<<setprecision(50)<<sum;
	}
	else if(s==2){
	cout<<"The difference is= "<<setprecision(50)<<subtraction;
	}
	else if(s==3){
	cout<<"The product is= "<<setprecision(50)<<multiplication;
	}
	else if(s==4){
	cout<<"The average is= "<<setprecision(50)<<average;
	}
	else if(s==5){
	cout<<"The sum is= "<<setprecision(50)<<sum<<endl<<endl;
	cout<<"The difference is= "<<setprecision(50)<<subtraction<<endl<<endl;
	cout<<"The product is= "<<setprecision(50)<<multiplication<<endl<<endl;
	cout<<"The average is= "<<setprecision(50)<<average<<endl<<endl;
	}
	else{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tsyntax error";
	}
	
	}
	
															//condition 8
	else if(num==9)
	{
	cout<<"Please enter number 1=";
	cin>>num1;
	cout<<"Please enter number 2=";
	cin>>num2;
	cout<<"Please enter number 3=";
	cin>>num3;
	cout<<"Please enter number 4=";
	cin>>num4;
	cout<<"Please enter number 5=";
	cin>>num5;
    cout<<"Please enter number 6=";
	cin>>num6;
	cout<<"Please enter number 7=";
	cin>>num7;
	cout<<"Please enter number 8=";
	cin>>num8;
	cout<<"Please enter number 9=";
	cin>>num9;
	cout<<endl;
		system ("CLS");
																	//calculations
	sum=num1+num2+num3+num4+num5+num6+num7+num8+num9;
	subtraction=num1-num2-num3-num4-num5-num6-num7-num8-num9;
	multiplication=num1*num2*num3*num4*num5*num6*num7*num8*num9;
	average=(num1+num2+num3+num4+num5+num6+num7+num8+num9)/9;
																	//queries
	cout<<"What calculation do you want? \n";
	cout<<"For sum press 1 \n";
	cout<<"For difference press 2 \n";
	cout<<"For multiplication press 3 \n";
	cout<<"For average press 4 \n";
	cout<<"For all of above press 5 \n";
	cout<<"Please enter= ";
	cin>>s;
	cout<<endl<<endl;
		system ("CLS");
																	//conditions
	if(s==1){
	cout<<"The sum is= "<<sum;
	}
	else if(s==2){
	cout<<"The difference is= "<<subtraction;
	}
	else if(s==3){
	cout<<"The product is= "<<multiplication;
	}
	else if(s==4){
	cout<<"The average is= "<<average;
	}
	else if(s==5){
	cout<<"The sum is= "<<setprecision(10)<<sum<<endl<<endl;
	cout<<"The difference is= "<<setprecision(50)<<subtraction<<endl<<endl;
	cout<<"The product is= "<<setprecision(10)<<multiplication<<endl<<endl;
	cout<<"The average is= "<<setprecision(5)<<average<<endl<<endl;
	}
	else{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tsyntax error";
	}
	
	}
	
															//condition 9
	else if(num==10)
	{
	cout<<"Please enter number 1=";
	cin>>num1;
	cout<<"Please enter number 2=";
	cin>>num2;
	cout<<"Please enter number 3=";
	cin>>num3;
	cout<<"Please enter number 4=";
	cin>>num4;
	cout<<"Please enter number 5=";
	cin>>num5;
    cout<<"Please enter number 6=";
	cin>>num6;
	cout<<"Please enter number 7=";
	cin>>num7;
	cout<<"Please enter number 8=";
	cin>>num8;
	cout<<"Please enter number 9=";
	cin>>num9;
	cout<<"Please enter number 10=";
	cin>>num10;
	cout<<endl;
		system ("CLS");
																		//calculations
	sum=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
	subtraction=num1-num2-num3-num4-num5-num6-num7-num8-num9-num10;
	multiplication=num1*num2*num3*num4*num5*num6*num7*num8*num9*num10;
	average=(num1+num2+num3+num4+num5+num6+num7+num8+num9+num10)/10;
																		//queries
	cout<<"What calculation do you want? \n";
	cout<<"For sum press 1 \n";
	cout<<"For difference press 2 \n";
	cout<<"For multiplication press 3 \n";
	cout<<"For average press 4 \n";
	cout<<"For all of above press 5 \n";
	cout<<"Please enter= ";
	cin>>s;
	cout<<endl<<endl;
		system ("CLS");
																		//conditions
	if(s==1){
	cout<<"The sum is= "<<setprecision(50)<<sum;
	}
	else if(s==2){
	cout<<"The difference is= "<<setprecision(50)<<subtraction;
	}
	else if(s==3){
	cout<<"The product is= "<<setprecision(50)<<multiplication;
	}
	else if(s==4){
	cout<<"The average is= "<<setprecision(50)<<average;
	}
	else if(s==5){
	cout<<"The sum is= "<<setprecision(50)<<sum<<endl<<endl;
	cout<<"The difference is= "<<setprecision(50)<<subtraction<<endl<<endl;
	cout<<"The product is= "<<setprecision(50)<<multiplication<<endl<<endl;
	cout<<"The average is= "<<setprecision(50)<<average<<endl<<endl;
	}
	else{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tsyntax error";
	}

	}
	else{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tsyntax error";
	}
	cout<<"\n \n Press any key to continue!!";
	getch();
	system ("CLS");
	cout<<"\n \t\t\t\t\t\t\t Thanks for using the software!!";
	getch();
	system ("CLS");
	return 0;
	
}