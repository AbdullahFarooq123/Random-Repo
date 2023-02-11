#include <iostream>
#include "abdullah"
#include <stdlib.h>

using namespace std ;

int main ()

{
	
	int rows , coloumns ;
	
	cout << "Please enter rows of matrix : " ;
	cin >> rows ;
	
	cout << "Please enter coloumns of matrix : " ;
	
	while ( ! ( cin >> coloumns ) /*|| coloumns != rows*/ )
	
	{
		
		cin_clear("Coloumns should be equal to rows!" , "Please enter coloumns of matrix : ") ;
		
	}
	
	
	int **matrix_1 = new int *[rows] ;
	
	for ( int i = 0 ; i < rows ; i++ )
		matrix_1[i] = new int [coloumns] ;
	
	for ( int i = 0 ; i < rows ; i ++ )
		for ( int j = 0 ; j < coloumns ; j++ )
			matrix_1[i][j] = 0 ;
			
	int **matrix_2 = new int *[rows] ;
	
	for ( int i = 0 ; i < rows ; i++ )
		matrix_2[i] = new int [coloumns] ;
	
	for ( int i = 0 ; i < rows ; i ++ )
		for ( int j = 0 ; j < coloumns ; j++ )
			matrix_2[i][j] = 0 ;
			
	int **matrix_3 = new int *[rows] ;
	
	for ( int i = 0 ; i < rows ; i++ )
		matrix_3[i] = new int [coloumns] ;
	
	for ( int i = 0 ; i < rows ; i ++ )
		for ( int j = 0 ; j < coloumns ; j++ )
			matrix_3[i][j] = 0 ;
			
	system("CLS") ;
	
	for ( int a = 0 ; a < rows ; a++ )
	
	{
		
		if ( a < 1 )
	for ( int k = 0 ; k <= rows ; k++ )
	
	{
		
		for ( int l = 0 ; l < coloumns ; l++ )
		
		{
			
			bool print = true ;
			
			system("CLS") ;
			
			for ( int i = 0 ; i < rows ; i++ )
	
			{
		
				int slash = i ;
				int character_1 ;
			
				for ( int j = 0 ; j < coloumns ; j++ )
		
				{
		
					character_1 = j ;
		
					if ( i == slash && j == 0 )
						cout << "|\t" ;
				
					cout << matrix_1[i][j] <<"\t" ;
			
				}
		
				cout << "|" ;
		
				if ( rows % 2 != 0 )
		
				{
			
					if ( character_1 == coloumns - 1 && i == rows / 2 )
						cout << " * " ;
			
					else 
						cout << "   " ;
				
					print = false ;
			
				}
		
				else 	
					cout << "   " ;
		
				for ( int j = 0 ; j < coloumns ; j++ )
		
				{
			
					character_1 = j ;
			
					if ( i == slash && j == 0 )
						cout << "|\t" ;
			
					cout << matrix_2[i][j] <<"\t" ;
			
				}
		
				cout << "|" ;
		
				int x = 0 ;
		
				for ( int j = 0 ; print ; j++ )
		
				{
				
					bool flag = true ;
			
					if ( j == coloumns + 24 )
						cout << "*" ;
			
					else if ( j == coloumns + 48 )
			
					{
				
						cout << "=" ;
						flag = false ;
				
					}
				
					else 
						cout << " " ;
				
					if ( !flag )
			
					{
				
						cout << endl ;
						print = false ;
						++x ;
					
					}
					
				}
		
				if ( !print && x == 0  )
					cout << endl ;
			
			}
				
			if ( k < rows )
				
			{
					
				cout << "Please enter element in matrix_1 at a[" << k << "][" << l << "]" ;
				cin >> matrix_1[k][l] ;
				
				cout << "Please enter element in matrix_2 at a[" << l << "][" << k << "]" ;
				cin >> matrix_2[l][k] ;
					
			}
				
		}
		
	}
	
	
	for ( int i = 0 ; i < rows ; i++ )
		
		
	
	
	for  ( int i = 0 ; i < rows ; i++ )
	
	{
	
		for ( int j = 0 ; j < coloumns ; j++ )
				
		{
					
			if ( i == slash && j == 0 )
				cout << "|\t" ;
					
			cout << matrix_3[i][j] << "\t" ;
					
		}
		
		cout << "|" ;
		
		cout << endl ;
		
	}
	}	
}
