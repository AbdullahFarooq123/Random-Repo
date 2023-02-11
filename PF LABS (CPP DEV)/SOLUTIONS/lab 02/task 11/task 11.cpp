#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()

{
	a:
	
	int servings , calories , cookies , total_calories ; 
	double calories_per_cookie , cookie , calories_consumed ;
	
	servings = 10 ; 
	calories = 300 ;
	cookies = 40 ;
	
	total_calories = servings * calories ;
	calories_per_cookie = total_calories / cookies ;
	
	cout << "Please enter how many cookies you ate : " ;
	cin >> cookie ;
	system("CLS") ;
	
	if ( cookie <= 40 ){
	
	system ("CLS") ;
	
	calories_consumed = cookie * calories_per_cookie ;
	
	cout << "After eating " << cookie << " cookies you consumed " << calories_consumed << " calories. " ;
	
	getch() ;
	system("CLS") ;
	goto a ; }
	
	else if ( cookie > 40 ){
		
	cout << "Please know that you had 40 cookies in the bag.." ;
	
	getch() ;
	system("CLS") ;
	goto a ; }
	
	else {
		
	cout << "PLEASE ENTER A NUMBER NOT CHARACTER " ;
		
	getch() ;
	system("CLS") ;
	goto a ; }
}
