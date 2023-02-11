#include <iostream>

using namespace std;
//*********************************************************FUNCTION-01****************************************************************************************
int increment()
{
	short int test = 32767 ;
	
	test ++ ;
	
	cout << "Value after increment is : " << test <<endl ;
}
//*********************************************************FUNCTION-02****************************************************************************************
int decrement()
{
	short int test = 32767 ;
	
	test -- ;
	
	cout << "Value after decrement is : " << test <<endl  ;
}
//********************************************************MAIN PROGRAM*****************************************************************************************
int main()
{
	short int test = 32767;
	
	cout << "Original value is : " << test <<endl ;
	 
	increment() ;
	
	decrement() ;
	
	return 0 ;
}
