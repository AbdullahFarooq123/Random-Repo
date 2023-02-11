#include<iostream>
using namespace std;
int main()
{
	cout<<"\t\t\t\t\t\t\t\tPROGRAM TO FIND GREATER AND SMALLEST NUMBER\n\n";
	int a,b,c,d,e;
	cout<<"please enter 1st no=";
	cin>>a;
	cout<<endl;
	cout<<"please enter 2nd no=";
	cin>>b;
	cout<<endl;
	cout<<"please enter 3rd no=";
	cin>>c;
	cout<<endl;
	cout<<"please enter 4th no=";
	cin>>d;
	cout<<endl;
	cout<<"please enter 5th no=";
	cin>>e;
	cout<<endl;
	if(a>b&&a>c&&a>d&&a>e){
	cout<<"greater number is : "<<a<<endl;}
    if(b>a&&b>c&&b>d&&b>e){
	cout<<"greater number is : "<<b<<endl;}
	if(c>a&&c>b&&c>d&&c>e){
	cout<<"greater number is : "<<c<<endl;}
	if(d>a&&d>b&&d>c&&d>e){
	cout<<"greater number is : "<<d<<endl;}
	if(e>a&&e>b&&e>c&&e>d){
	cout<<"greater number is : "<<e<<endl;}
	if(a<b&&a<c&&a<d&&a<e){
	cout<<"smaller number is : "<<a<<endl;}
    if(b<a&&b<c&&b<d&&b<e){
	cout<<"smaller number is : "<<b<<endl;}
	if(c<a&&c<b&&c<d&&c<e){
	cout<<"smaller number is : "<<c<<endl;}
	if(d<a&&d<b&&d<c&&d<e){
	cout<<"smaller number is : "<<d<<endl;}
	if(e<a&&e<b&&e<c&&e<d){
	cout<<"smaller number is : "<<e<<endl;}	
}
