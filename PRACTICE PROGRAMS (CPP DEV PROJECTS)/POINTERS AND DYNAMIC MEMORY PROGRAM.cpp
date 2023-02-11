#include <iostream>
#include <stdlib.h>

using namespace std ;

void initialize ( int [] , int , int ) ;
void print ( int [] , int ) ;
int *addElement ( int [] , int & , int ) ;
int *deleteFirst ( int [] , int & ) ;
void selectionSort ( int [] , int , int ) ;
void swap ( int [] , int , int ) ;

int main ()

{

	int n ;

	cout<< "Enter list size: " ;
	cin >> n ;

	int *A = new int [n] ;

	if ( n <= 0 )

	{
		cout<< "Bad size" << endl ;
		return 0 ;

	}

	initialize ( A , n , 0 ) ;  // initialize the array A with value 0

	print ( A , n ) ;

	A = addElement ( A , n , 5 ) ;  //add an element of value 5 at the end of A

	print ( A , n) ;

	A = deleteFirst ( A , n ) ;  // delete the first element from A

	print( A , n ) ;

	selectionSort ( A , 0 , n ) ;  // sort the array (not shown)

	print( A , n ) ;

	delete [] A ;

}

void initialize ( int list[] , int size , int value )
{

	for ( int i = 0 ; i < size ; i++ )
		list[i] = value ;

}

void print ( int list[] , int size )
{

	cout<< "[ " ;

	for ( int i = 0 ; i < size ; i++ )
		cout << list[i] << " " ;

	cout << " ]" << endl ;

}

int *addElement ( int list[] , int &size , int value )
{
	int *newList = new int [size+1] ; // make new array

	if ( newList == 0 )
	{

		cout<< "Memory allocation error for addElement!" << endl ;
		exit (-1) ;

	}

	for ( int i = 0 ; i < size ; i++ )
		newList[i] = list[i] ;

	if( size )
		delete [] list ;

	newList[size] = value ;

	size++ ;

	return newList ;

}

int *deleteFirst ( int list[] , int &size )
{

	if ( size <= 1 )
	{

		if ( size )
			delete list ;

		size = 0 ;

		return NULL ;

	}

	int *newList = new int [size-1] ; // make new array

	if ( newList == 0 )
	{

		cout<< "Memory allocation error for deleteFirst!" << endl ;
		exit(-1) ;

	}

	for ( int i = 0 ; i < size-1 ; i++ ) // copy and delete old array
		newList[i] = list[i+1] ;

	delete [] list ;
	size-- ;
	return newList ;

}

void selectionSort ( int array[] , int starting_index , int ending_index )

{

    if ( ending_index == 0 )
        return ;

	for ( int i = starting_index ; i < ending_index ; i++ )

	{

		int minimum_index = i ;

		for ( int j = i+1 ; j <= ending_index ; j++ )

			if ( array [minimum_index] > array [j] )

				minimum_index = j ;

		swap ( array , minimum_index , i ) ;

	}

}

void swap ( int array[] , int a , int b )

{

	int temp = array [a] ;
	array [a] = array [b] ;
	array [b] = temp ;

}



