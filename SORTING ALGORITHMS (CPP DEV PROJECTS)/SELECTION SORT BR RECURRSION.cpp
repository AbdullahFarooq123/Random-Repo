#include <iostream>

using namespace std ;

void swap ( int [] , int , int ) ;
int selectionSort ( int [] , int , int , int , int ) ;

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

	selectionSort ( array , starting_index , ending_index , 0 , 0 ) ;

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

int selectionSort ( int array[] , int starting_index , int ending_index , int minimum_index , int j )

{
	
	if ( starting_index <= ending_index )
	
	{
		
		static bool flag = true ;
		
		if (flag == true )
		
		{
			
			minimum_index = starting_index ;
			j = starting_index + 1 ;
			
		}
		
		if ( j <= ending_index ) 
		
		{
			
			if ( array [minimum_index] > array [j] )
				
				minimum_index = j ;
				
			flag = false ;
			
			j++ ;
			
			return selectionSort ( array , starting_index , ending_index , minimum_index , j ) ;
				
		}
		
		flag = true ;
		
		swap ( array , minimum_index , starting_index ) ;
		
		return selectionSort ( array , starting_index + 1 , ending_index , 0 , 0 ) ; 
		
	}
	
	else 
		return 0 ;
	
}
