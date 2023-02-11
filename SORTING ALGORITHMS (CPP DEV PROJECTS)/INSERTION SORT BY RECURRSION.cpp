#include <iostream>

using namespace std ;

int insertionSort ( int [] , int , int , int , int ) ;
void swap ( int [] , int , int ) ;

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
	
	insertionSort ( array , starting_index , ending_index , 0 , 0 ) ;

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

int insertionSort ( int array[] , int starting_index , int ending_index , int value , int j )

{
	
	if ( starting_index <= ending_index )

	{
		
		static bool flag = true ;
		
		if (flag)
		
		{
			
			value = array [starting_index] ;
			j = starting_index ;
			
		}
		
		if  ( j > 0 && value < array [j-1] )
		
		{
		
			array [j] = array [j-1] ;
			j-- ;
			
			flag = false ;
			
			return insertionSort ( array , starting_index , ending_index , value , j ) ;
		
		}
		
		flag = true ;
		
		array [j] = value ;
		
		return insertionSort ( array , starting_index + 1 , ending_index , 0 , 0 ) ;
	}
	
	else 
		return 0 ;
	
}

