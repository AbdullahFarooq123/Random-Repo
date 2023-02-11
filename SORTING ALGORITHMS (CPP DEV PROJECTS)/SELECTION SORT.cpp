#include <iostream>

using namespace std ;

void swap ( int [] , int , int ) ;
void selectionSort ( int [] , int , int ) ;

int main ()

{

	int number ;
	int array [100] ;
	cout << "Please enter elements of array : " ;
	cin >> number ;

	for ( int i = 0 ; i < number ; i++ )

	{

		cout << "Please enter element at index A." << i << ":" ;
		cin >> array[i] ;

	}

	int starting_index = 0 ;
	int ending_index = (sizeof array / 4 + number) - 101 ;

	selectionSort ( array , starting_index , ending_index ) ;

	for ( int i = starting_index ; i <= ending_index ; i++ )
	{

		cout << array[i] << " " ;

	}

}

void swap ( int array[] , int a , int b )

{

	int temp = array [a] ;
	array [a] = array [b] ;
	array [b] = temp ;

}

void selectionSort ( int array[] , int starting_index , int ending_index )

{
	
	for ( int i = starting_index ; i < ending_index ; i++ )
	
	{
		
		int minimum_index = i ;
		
		for ( int j = i+1 ; j <= ending_index ; j++ ) 
		
			if ( array [minimum_index] > array [j] )
				
				minimum_index = j ;
		
		swap ( array , minimum_index , i ) ;
		
	}
	
}

