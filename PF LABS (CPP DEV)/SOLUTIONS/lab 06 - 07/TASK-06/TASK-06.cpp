#include <iostream>
#include "abdullah"

using namespace std ; 

 int main ()
 
 {
 	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		int size ;
 		
		 cout << "Please enter size of an odd array : " ;
 	
	 	while ( ! ( cin >> size ) || size % 2 == 0 || size < 1 )
 	
	 	{
 		
 			cin_clear ( "No character or a n even number or a negative number!!") ;
 			cout << "Please enter size of an odd array : " ;
	 	
		}
	
		int array [size] ;
	
		for ( int i = 0 ; i < size ; i++ )
	
		{
		
			cout << "Please enter element at index A." << i << " : " ;
		
			while ( ! ( cin >> array [i] ) )
 		
		 	{
 		
 				cin_clear ( "No character!!") ;
 				cout << "Please enter element at index A." << i << " : " ;
	 	
			}
		
		}
		
		system("cls") ;
		
		int middle = ( sizeof array / 4 - 1 ) / 2 ;	
 	
 		int elements [] = { 0 , middle , middle , sizeof array / 4 - 1 , sizeof array / 4 - 1 , 0 } ;
 	
 		cout << "The array before swaping indexes is : " ;
	
		for ( int i = 0 ; i < size ; i++ )
	
		{
		
			cout << array [i] << " " ;	
		
		}
	
		cout << endl ;
 	
 		for ( int i = 0 ; i < 5 ; i+=2 )
 		{
 		
 			swap ( array , elements [i] , elements [i+1] ) ;
 		
		}
	
		cout << "The array after swaping indexes is : " ;
	
		for ( int i = 0 ; i < size ; i++ )
	
		{
		
			cout << array [i] << " " ;	
		
		}

		flag = continuationLoop () ;
		
	}
 	
 }
