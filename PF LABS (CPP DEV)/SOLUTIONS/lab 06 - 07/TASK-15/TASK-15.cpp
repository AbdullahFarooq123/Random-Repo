#include <iostream>
#include "abdullah"

using namespace std ;

template < typename datatype >
void getJudgeData( datatype & , int i ) ;

template < typename datatype >
void calcScore ( datatype [] ) ;

template < typename datatype >
datatype findLowest ( datatype [] ) ;

template < typename datatype >
datatype findHighest ( datatype [] ) ;

int main ()

{

	bool flag = true ;
	
	while ( flag )
	
	{
		
		double judge_score [5] ;

		for ( int i = 0 ; i < 5 ; i++ )

		{

			getJudgeData( judge_score [i] , i ) ;

		}
			
		system("cls") ;
			
		cout << "The judge's score are : " << endl << endl ;
	
		for ( int i = 0 ; i < 5 ; i++ )
	
		{
		
			cout << "Judge " << i + 1 << " score is : " << judge_score [i] << endl ;
		
		}
		
		cout << endl ;

		calcScore ( judge_score ) ;
		
		cout << endl ;
	
		flag = continuationLoop() ;
		
	}

}

template < typename datatype >

void getJudgeData( datatype &judge_score , int i )

{

		cout << "Please enter score of JUDGE." << i+1 << " ( in range 0 - 10 ): " ;
		while ( ! ( cin >> judge_score ) || judge_score < 0 || judge_score > 10 )
		
		{
			
			cin_clear ("No character or number greater than range 0 - 10 ") ;
			cout << "Please enter score of JUDGE." << i+1 << " ( in range 0 - 10 ): " ;
			
		}

}

template < typename datatype >

void calcScore ( datatype judge_score [] )

{

	double highest_value = findHighest ( judge_score ) ;
	double lowest_value = findLowest ( judge_score ) ;

	double sum = 0 ;
	
	double number_of_values = 5 ;
	
	bool high = true , low = true ;
	
	for ( int i = 0 ; i < 5 ; i++ )

	{
		
		if ( judge_score[i] == highest_value  && high )

		{
			
			judge_score [i] = 0 ;
			high = false ;
			
		}
		
		if ( judge_score[i] == lowest_value  && low )

		{
			
			judge_score [i] = 0 ;
			low = false ;
			
		}
		
		if ( high == false && low == false )
			break ;
		
	}

	for ( int i = 0 ; i < 5 ; i++ )

	{
		
		sum+= judge_score [i] ;

	}
	
	for ( int i = 0 ; i < 4 ; i++ )
	
	{
		
		if ( judge_score[i] == 0 )
		
		{
		
			number_of_values = 3 ;
			break ;
			
		}
		
	}

	cout << "The overall score is : " << sum / number_of_values ;

}

template < typename datatype >

datatype findHighest ( datatype judge_score [] )

{
	int max = judge_score [0] ;

	for ( int i = 1 ; i <= 4 ; i++ )

	{

		if ( max < judge_score [i] )
			max = judge_score [i] ;

	}

	bool check = true ;

	for ( int i = 0 ; i < 4 ; i++ )

	{

		for ( int j = i + 1 ; j < 4 ; j++ )

			if ( judge_score [i] == judge_score [j] )

				check = true ;

			else

			{

				check = false ;
				break ;

			}
			
			if ( !check )

                break ;

	}

	if ( check )

		return -1 ;

	else

		return max ;


}

template < typename datatype >

datatype findLowest ( datatype judge_score [] )

{

	int min = judge_score [0] ;

	for ( int i = 1 ; i <= 4 ; i++ )

	{

		if ( min > judge_score [i] )

			min = judge_score [i] ;

	}

	bool check = true ;

	for ( int i = 0 ; i < 4 ; i++ )

	{

		for ( int j = i + 1 ; j < 4 ; j++ )

			if ( judge_score [i] == judge_score [j] )

				check = true ;

			else

			{

				check = false ;
				break ;

			}
			
			if ( !check )

                break ;

	}

	if ( check )

		return -1 ;

	else

		return min ;

}

