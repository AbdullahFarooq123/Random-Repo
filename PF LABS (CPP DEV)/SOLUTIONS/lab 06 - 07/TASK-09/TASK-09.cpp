#include <iostream>
#include "abdullah"

using namespace std ;

int main ()

{
	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		int size_1 ;
	
		cout << "Please enter size of array-01 : " ;
	
		while ( ! ( cin >> size_1) || size_1 < 1 )
		
		{
			
				cin_clear () ;
				cout << "Please enter size of array-01 : " ;
			
		}
	
		int array_1 [size_1] ;
	
		for ( int i = 0 ; i < size_1 ; i++ )
	
		{
		
			cout << "Please enter element at index A." << i << " : " ;
		
			while ( ! ( cin >> array_1 [i]) )
		
			{
			
				cin_clear ("No character!!") ;
				cout << "Please enter element at index A." << i << " : " ;
			
			}
		
			insertionSort ( array_1 , 0 , i ) ;
		
		}
	
		int size_2 ;
	
		cout << "Please enter size of array-02 : " ;
	
		while ( ! ( cin >> size_2) || size_2 < 1 )
		
		{
			
				cin_clear () ;
				cout << "Please enter size of array-02 : " ;
			
		}
	
		int array_2 [size_2] ;
	
		for ( int i = 0 ; i < size_2 ; i++ )
	
		{
		
			cout << "Please enter element at index A." << i << " : " ;
			while ( ! ( cin >> array_2 [i]) )
		
			{
			
				cin_clear ("No character!!") ;
				cout << "Please enter element at index A." << i << " : " ;
			
			}
		
			insertionSort_decending ( array_2 , 0 , i ) ;
		
		}
	
		int size_3 = size_1 + size_2 ;
	
		int array_3 [100] = {0} ;
	
		int x = 0 ;	
		
		for ( int j = 0 ; j < size_1 ; j++ )
			array_3[j] = array_1 [j] ;
		
		for ( int j = size_1 ; j < size_3 ; j++ )
		
		{
		
			static int x = 0 ;
			array_3[j] = array_2 [x] ;
			x++ ;
			
		}
	
		for ( int i = 0 ; i < size_3 ; i++ )
	
		{
		
			cout << array_3[i] << " " ;
		
		}
	
		insertionSort( array_3 , 0 , size_3 - 1 ) ;
	
		system("cls") ;
	
		cout << "Array_01 is : " << endl ;
	
		for ( int i = 0 ; i < size_1 ; i++ )
	
		{
		
			cout << array_1[i] << "\t" ;
		
		}
	
		cout << endl ;
	
		cout << "Array_02 is : " << endl ;
	
		for ( int i = 0 ; i < size_2 ; i++ )

		{
		
			cout << array_2[i] << "\t" ;
		
		}
	
		cout << endl ;
	
		cout << "Merged array is (array_03) : " << endl ;
	
		for ( int i = 0 ; i < size_3 ; i++ )
	
		{
		
			cout << array_3[i] << " " ;
		
		}
		
		flag = continuationLoop () ;
		
	}
	
}
