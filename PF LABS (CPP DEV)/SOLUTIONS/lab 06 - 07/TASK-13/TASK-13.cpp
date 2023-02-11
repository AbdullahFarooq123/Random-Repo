#include <iostream>
#include <cmath>
#include "abdullah"

using namespace std ;

double kineticEnergy ( double , double ) ;

int main ()

{
	
	bool flag = true ;
	
	while ( flag )
	
	{
		
		double mass , velocity ;
		
		cout << "Please enter mass of body ( in Kg ) : " ;
		
		while ( ! ( cin >> mass ) || mass < 1 )
		
		{
			
			cin_clear () ;
			cout << "Please enter mass of body ( in Kg ) : " ;
			
		}
		
		cout << "Please enter velocity of body ( in m/sec ) : " ;
		
		while ( ! ( cin >> velocity ) || velocity < 1 )
		
		{
			
			cin_clear () ;
			cout << "Please enter velocity of body ( in m/sec ) : " ;
			
		}
		
		system("cls") ;
	
		cout << "The kinetic energy of the body is : " << kineticEnergy ( mass , velocity ) << " Joule." ;
		
		flag = continuationLoop() ;
		
	}
	
}

double kineticEnergy ( double mass , double velocity )

{

	double kinetic_energy = mass * pow ( velocity , 2 ) / 2 ;
	return kinetic_energy ;
		
}
