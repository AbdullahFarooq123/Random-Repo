#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "string"

using namespace std;

void cin_clear ()
{

	system("CLS") ;
	cin.clear () ;
	cin.ignore ( INT_MAX , '\n' ) ;

}

int main()

{

    int score[40] , students , elements , index , value ;

	bool check = true , flag = true ;

	char option ;

	cout << "Please enter number of students : " ;

	while ( ! ( cin >> students ) || students > 100 || students < 1 )

	{

		cin_clear() ;
		cout << "Please enter number of students : " ;

	}

	for (int i = 0 ; i < students ; i++ )

	{
		cout << "Please enter score at index " << i << " : " ;

		while ( ! ( cin >> score[i] ) )

		{

			cin_clear() ;
			cout << "Please enter score at index " << i << " : " ;

		}

	}

	system("CLS") ;

	while (check)

	{

		system ("CLS") ;

		cout << "***************************************************" << endl ;
		cout << "* 1. UPDATE                                       *" << endl ;
		cout << "* 2. DELETE                                       *" << endl ;
		cout << "* 3. GET                                          *" << endl ;
		cout << "* 4. VIEW                                         *" << endl ;
		cout << "* 5. EXIT                                         *" << endl ;
		cout << "***************************************************" << endl ;

		option = getch() ;

		if ( option == '1' || option == '2' || option == '3' || option == '4' || option == '5' )

		{

			int same [30] = {0} , b [30] = {0} , c [30] = {0} , x = 0 , y = 0 , z = 0 ;

			system ("CLS") ;

			switch ( option )

			{
				case '1' :

				cout << "Please enter number of elements to update : " ;

				while ( ! ( cin >> elements ) || elements > students || elements < 1 )

				{

					cin_clear() ;
					cout << "Please enter number of elements to update : " ;

				}

				for ( int i = 0 ; i < elements ; i++ )

				{

					cout << "Enter index number : " ;

					while ( ! ( cin >> index ) || index > students || index < 0 )

					{

						cin_clear() ;
						cout << "Enter index number : " ;

					}

					cout << "Please enter update value : " ;

					while ( ! ( cin >> value ) )

					{

						cin_clear() ;
						cout << "Please enter update value : " ;

					}

					score[index] = value ;

				}

					system("CLS") ;

					cout << "The updated index is : " << endl ;

					for ( int i = 0 ; i < students ; i++ )

					{

						cout << "A." << i << " = " << score[i] << endl ;

					}

                Sleep ( 3000 ) ;

                break ;

            case '2' :

                while ( bool a = true )

                {

					system("CLS") ;

                	cout << "****************************" << endl ;
                	cout << "* 1. ALL                   *" << endl ;
                	cout << "* 2. SOME                  *" << endl ;
                	cout << "****************************" << endl ;

                	option = getch() ;

                	if ( option == '1' || option == '2' )

                	{

                		switch (option)

						{

							case '1' :

								for ( int i = 0 ; i < students ; i++ )

								{

									score[i] = 0 ;

								}

								break ;

							case '2' :

								cout << "Please enter number of elements to delete : " ;

								while ( ! ( cin >> elements ) || elements > students || elements < 1 )

								{

									cin_clear () ;
									cout << "Please enter number of elements to delete : " ;

								}

								for ( int i = 0 ; i < elements ; i++ )

								{

									cout << "Enter index number to delete : " ;

									while ( ! ( cin >> index ) || index > students || index < 0 )

									{

										cin_clear () ;
										cout << "Enter index number to delete : " ;

									}

									score[index] = 0 ;

								}

								break ;



						}



    	            	cout << "New index is : " << endl ;

        	        	for ( int i = 0 ; i < students ; i++ )

            	    	{

                	    	cout << "A." << i << " = " << score[i] << endl ;

                		}

                		Sleep ( 3000 ) ;

    	           		break ;

    	           		a = false ;

					}

				}

				break ;

            case '3' :

            	cout << "***********************" << endl ;
            	cout << "* 1. SCORE            *" << endl ;
   		       	cout << "* 2. INDEX            *" << endl ;
       	    	cout << "***********************" << endl ;

            	option = getch() ;

            	if ( option == '1' || option == '2')

            	{

            		system("cls") ;

            		switch (option)

					{

            			case '1' :

							cout << "Please enter number of scores to get : " ;

            				while ( ! ( cin >> value ) || value > students || value < 1  )

            				{

            					cin_clear () ;
            					cout << "Please enter number of scores to get : " ;

							}

            				for ( int i = 0 ; i < value ; i++ )

       						{

								cout << "Please enter index number : " ;

    							while ( ! ( cin >> index ) || index >= students || index < 0 )

    							{

    								cin_clear() ;
    								cout << "Please enter index number : " ;

								}

            					same [i] = score [ index ] ;
            					b [i] = index ;

							}

							system("cls") ;

							cout << "The scores requested are : " << endl ;

							for ( int i = 0 ; i < value ; i++ )

							{

								cout << same [i] << " at index A." << b[i] << endl ;

							}

							Sleep ( 3000 ) ;

							break ;

						case '2' :

							cout << "Please enter number of indexes to get : " ;

							while ( ! ( cin >> value ) || value > students || value < 1 )

							{

								cin_clear() ;
								cout << "Please enter number of indexes to get : " ;

							}

							bool found = true ;

							for ( int i = 0 ; i < value ; i++ )

							{


								cout << "Please enter the score : " ;

								while ( ! ( cin >> elements ) )

								{

									cin_clear() ;
									cout << "Please enter the score : " ;

								}


								for ( int a = 0 ; a < students ; a++ )

								{

									if ( elements == score[a] )

									{

										same [x] = a;

										b[x] =score[a] ;

										x++ ;

										found = false ;
										break ;

									}

								}

								if ( found == true )

								{

									c [z] = elements ;
									++z ;

								}
								found = true ;

							}

							system ("CLS") ;

							cout << "Requested indexes are as follows : " << endl ;

							for ( int i = 0 ; i < x ; i++ )

							{

								cout << "A." << same [i] << "\t" ;
								cout << b[i] << endl ;

							}

							if ( x < value )

							{

								for ( int i = 0 ; i < ( value - x ) ; i++ )
								cout << "Index not found at score " << c [i] << endl ;

							}

							system("pause") ;

						}

					}

				cin.clear() ;
				cin.ignore(INT_MAX , '\n') ;

    			break ;

			case '4' :

				cout << "The indexes with scores are : " << endl ;

				for ( int i = 0 ; i < students ; i++ )

				{

					cout << "A." << i << " : "<< score [i] << endl ;

				}

				Sleep ( 4000 ) ;

				break ;

			case '5' :

				return 0 ;

			}

			bool flag = true ;

			while ( flag )

			{

				system("CLS") ;

				cout << "Do you want to continue (y/n) : " ;

				flag = true ;

				option = getch() ;

				if ( option == 'y' )

				{

					system ("CLS") ;

					flag = false ;
					check = true ;

				}

				else if ( option == 'n' )

				{

					flag = false ;
					check = false ;

				}

			}

		}

	}

	system ("CLS") ;

	return 0 ;

}

