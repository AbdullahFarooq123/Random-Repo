#include <iostream>
#include <cmath>

using namespace std ;

double fallingDistance ( int ) ;

int main ()

{
	
	for ( int time = 1 ; time <= 10 ; time++ )
	{
		
		cout << "The falling distance of the object is : " << fallingDistance (time) << " m. " << endl ;
		
	}	
	
	
}

double fallingDistance ( int time )

{
	
	double distance , gravitational_acceleration = 9.8 ;
	
	return distance = gravitational_acceleration * pow ( time , 2 ) / 2 ;
	
}
