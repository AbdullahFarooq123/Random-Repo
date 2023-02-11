#include <iostream>

using namespace std ;

void swap ( int [] , int , int ) ;
void bubbleSort ( int [] , int , int ) ;

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

	for ( int i = ending_index ; i >= 0 ; i-- )
	

	{
		for ( int j = 0 ; j < i ; j++ )
		
		{
			
			if ( array [j] > array [j+1] )
			
			{
				
				swap ( array , j , j + 1 ) ;
				
			}
			
		}
		
	}

	for ( int i = 0 ; i <= ending_index ; i++ )
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

