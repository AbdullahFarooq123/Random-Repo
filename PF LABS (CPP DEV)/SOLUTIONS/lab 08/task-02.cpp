#include <iostream>
#include <stdlib.h>

using namespace std ;

int main ()

{
	
	int array [7][3] = {0} ;

	for ( int i = 0 ; i <= 7 ; i++ )
	
	{
		
		static int a = 1 ;
		
		for ( int j = 0 ; j < 3 ; j++ )
		
		{
			
			system("CLS") ;
			
			cout << "+-------+-----------+-----------+-----------+" << endl ;
			cout << "|       | MONKEY 1  | MONKEY 2  |  MONKEY 3 |" << endl ;
			cout << "+-------+-----------+-----------+-----------+" << endl ;
			cout << "| DAY 1 |    " << array[0][0] <<"      |" << "    " << array[0][1] << "      |" << "    " << array[0][2] << "      |" << endl ;
			cout << "+-------+-----------+-----------+-----------+" << endl ; 
			cout << "| DAY 2 |    " <<array[1][0] << "      |" << "    " << array[1][1] << "      |" << "    " << array[1][2] << "      |" << endl ;
			cout << "+-------+-----------+-----------+-----------+" << endl ; 
			cout << "| DAY 3 |    " <<array[2][0] << "      |" << "    " << array[2][1] << "      |" << "    " << array[2][2] << "      |" << endl ;
			cout << "+-------+-----------+-----------+-----------+" << endl ; 
			cout << "| DAY 4 |    " <<array[3][0] << "      |" << "    " << array[3][1] << "      |" << "    " << array[3][2] << "      |" << endl ;
			cout << "+-------+-----------+-----------+-----------+" << endl ; 
			cout << "| DAY 5 |    " <<array[4][0] << "      |" << "    " << array[4][1] << "      |" << "    " << array[4][2] << "      |" << endl ;
			cout << "+-------+-----------+-----------+-----------+" << endl ; 
			cout << "| DAY 6 |    " <<array[5][0] << "      |" << "    " << array[5][1] << "      |" << "    " << array[5][2] << "      |" << endl ;
			cout << "+-------+-----------+-----------+-----------+" << endl ; 
			cout << "| DAY 7 |    " <<array[6][0] << "      |" << "    " << array[6][1] << "      |" << "    " << array[6][2] << "      |" << endl ;
			cout << "+-------+-----------+-----------+-----------+" << endl ; 
			
			if ( i < 7 )
				cin >> array [i][j] ;
			
		}
					
	}
	
	int average = 0 ;
	for ( int i = 0 ; i < 7 ; i++ )
		for ( int j = 0 ; j < 3 ; j++ )
			average += array[i][j] ;
			
	cout << "The average of food is : " << average / 21 << endl ;
	
	int max = array[0][0] ;
	
	for ( int i = 1 ; i < 7 ; i++ )
		for ( int j = 1 ; j < 3 ; j++ )
			if ( max < array[i][j] )
				max = array[i][j] ;
				
	cout << "Maximum of food eaten is : " << max << endl ;
	
	int min = array[0][0] ;
	
	for ( int i = 1 ; i < 7 ; i++ )
		for ( int j = 1 ; j < 3 ; j++ )
			if ( min > array[i][j] )
				min = array[i][j] ;
				
	cout << "Minimum of food eaten is : " << min << endl ;			
	
}
