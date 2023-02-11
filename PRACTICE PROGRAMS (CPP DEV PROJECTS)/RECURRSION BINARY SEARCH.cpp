#include <iostream>

using namespace std ;

int binarySearch ( int array [] , int first_index , int last_index , int element )
{
	int middle_index = first_index + ( last_index - first_index ) / 2 ;
	if ( first_index <= last_index )	
	{	
		if ( array [ middle_index ] == element )
			return middle_index ;
		else if ( array [middle_index] > element )
			return binarySearch ( array , first_index , middle_index - 1 , element ) ;
		else 
			return binarySearch ( array , middle_index + 1 , last_index , element ) ; 
	}
	else
		return -1 ;
	
}

int main ()

{
				
	int array [] = { 10 , 15 , 18 , 34 , 46 , 51 , 59 , 65 , 68 , 97 } ; 
	int first_index = 0 ;
	int last_index = 9 ; 
	int element ;
	
	cout << "Please enter element to find in the array : " ;
	cin >> element ;
	
	int value = binarySearch ( array , first_index , last_index , element ) ;
	
	if ( value == -1 )
		cout << "Element " << element << " not found in the array !!" ;
	else 
		cout << "Element " << element << " found at index " << value ;
	
}
