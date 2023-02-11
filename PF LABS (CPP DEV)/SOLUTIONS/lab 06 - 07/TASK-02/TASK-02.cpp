#include <iostream>
#include <string>
#include "abdullah"


using namespace std ;

int main () 

{
	
	bool check = true ;
	
	while ( check )
	
	{
		
		double array[12] ;
		double total_rainfall = 0.0 ;
		double minimum ;
		double maximum ;
		
		string month [2] ;
		string months[] = { "January" , "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December" } ;
	
		for ( int i = 0 ; i < 12 ; i++ )
	
		{
		
			cout << "Please enter rainfall in " << months [i] << " : " ;
			while ( ! ( cin >> array [i] ) || array[i] < 0 )
			
			{

				cin_clear () ;
				cout << "Please enter rainfall in " << months [i] << " : " ;
				
			}
		
			static int min = array [0] ;
			static int max = array [0] ;
			static string max_month = months [0] ;
			static string min_month = months [0] ;
			
			if ( min > array[i] )
			{
				min = array[i] ;
				min_month = months [i] ;
			}
			
			month [0] = min_month ;
			minimum = min ;
			
			if ( max < array[i] )
			{
				max = array[i] ;
				max_month = months [i] ;
			}
			
			month [1] = max_month ;
			maximum = max ;
		
			total_rainfall += array[i] ;
		
		
		}
		
		system("cls") ;
		
		cout << "The rainfall is : " << endl ;
		
		for ( int i = 0 ; i < 12 ; i++ )
		
		{
			
			cout << "The rainfall in " << months [i] << " is : " << array[i] << " mm." << endl ;
			
		}
		
		cout << endl ;
		system("pause") ;
		system ("cls") ;
	
		cout << "The total rainfall is : " << total_rainfall << " mm." << endl << endl ;
		Sleep (300) ;
		cout << "The average rainfall is : " << total_rainfall / 12 << " mm." << endl << endl ;
		Sleep (300) ;
		cout << "The minimum rainfall is : " << minimum << " mm in the month " << month [0] << "." << endl << endl ;
		Sleep (300) ;
		cout << "The maximum rainfall is : " << maximum << " mm in the month " << month [1] << "." << endl << endl ;
		Sleep (300) ;
		
		
		check = continuationLoop () ;
		
	}
	
}
