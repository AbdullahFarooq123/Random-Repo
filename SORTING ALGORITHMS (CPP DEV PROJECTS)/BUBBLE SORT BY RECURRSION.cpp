#include <iostream>

using namespace std ;

void arraySwap ( int [] , int , int ) ;
int bubbleSort ( int [] , int , int ) ;

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
	
	bubbleSort ( array , starting_index , ending_index ) ;
	
	for ( int i = starting_index ; i <= ending_index ; i++ )
	cout << array [i] << " " ;
	

}

void arraySwap ( int array[] , int a , int b )

{

	int temp = array [a] ;
	array [a] = array [b] ;
	array [b] = temp ;

}

int bubbleSort ( int array[] , int starting_index , int ending_index )

{
	
	if ( starting_index < ending_index )
	
	{
		
		static int iteration = 0 ;
		
		if ( iteration < ending_index )
		
		{
			
			if ( array [ iteration ] > array [ iteration + 1 ] )
				arraySwap ( array , iteration , iteration + 1 ) ;
			++iteration ;
			return bubbleSort ( array , starting_index , ending_index ) ;
			
		}
		
		iteration = 0 ;
		
		return bubbleSort ( array , starting_index , ending_index - 1 ) ;
		
	}
	
	else 
		return 1 ;
	
}

