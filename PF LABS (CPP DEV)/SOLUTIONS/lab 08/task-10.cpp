#include <iostream>

using namespace std ;

int main ()

{
	
	int rows , coloumns ;
	
	cout << "Please enter rows of matrix : " ;
	cin >> rows ;
	
	cout << "Please enter coloumns of matrix : " ;
	cin >> coloumns ;
	
	
	int **ptr = new int *[rows] ;
	
	for ( int i = 0 ; i < rows ; i++ )
		ptr[i] = new int [coloumns] ;
	
	for ( int i = 0 ; i < rows ; i ++ )
		for ( int j = 0 ; j < coloumns ; j++ )
			ptr[i][j] = 0 ;
			
	system("cls") ;
	
	for ( int k  = 0 ; k <= rows ; k++ )
	
	{
		
		for ( int l = 0 ; l < coloumns ; l++ )
		
		{
			
			int slash ;
		
			system ("cls") ;
		
			for ( int i = 0 ; i < rows ; i ++ )
	
			{
			
				int slash = i ;
		
				for ( int j = 0 ; j < coloumns ; j++ )
		
				{
			
					if ( i == slash && j == 0 )
						cout << "|" ;
			
					cout << "\t" << ptr[i][j] << "\t" ;
			
				}
		
				cout << "|" << endl ;
				
			}
		
			if ( k < rows )
			
			{
				
				cout << "Please enter element at a[" << k << "][" << l << "] : " ;
				cin >> ptr [k][l] ;	
				
			}
			
		}	
		
	}
	
	cout << endl << endl << "Transpose of matrix is : " << endl << endl ;
	
	if ( rows == coloumns )
	
	{
		
		for ( int i = 0 ; i < rows ; i ++ )
	
		{
			
			int slash = i ;
		
			for ( int j = 0 ; j < coloumns ; j++ )
		
			{
			
				if ( i == slash && j == 0 )
					cout << "|" ;
			
				cout << "\t" << ptr[j][i] << "\t" ;
			
			}
		
			cout << "|" << endl ;
				
		}	
		
	}	
	
	if ( rows != coloumns )
	
	{
		
		for ( int i = 0 ; i < coloumns ; i ++ )
	
		{
			
			int slash = i ;
		
			for ( int j = 0 ; j < rows ; j++ )
		
			{
			
				if ( i == slash && j == 0 )
					cout << "|" ;
			
				cout << "\t" << ptr[j][i] << "\t" ;
			
			}
		
			cout << "|" << endl ;
				
		}	
		
	}	
	
}
