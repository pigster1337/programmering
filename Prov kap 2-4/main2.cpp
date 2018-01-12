//Uppgift 2, Isak Wikman

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  
    cout << "Mata in tre flyttal: " << endl;                       						// Säger åt att mata in tre flyttal
      double flyttal[3];											// Gör ett fält med typen double (flyttal) som har plats för 3 flyttal
      
    cout << "Tal 1: ";
      cin >> flyttal[0];
    cout << "Tal 2: ";
      cin >> flyttal[1];
    cout << "Tal 3: ";
      cin >> flyttal[2];											// Matar in tre flyttal i fältet
														
      double medelvarde = (flyttal[0]+flyttal[1]+flyttal[2])/3;							// Medelvärdet av talen i fältet beräknas
      
    cout << "Medelvärdet av " << flyttal[0] << ", " << flyttal[1] << " och " << flyttal[2] << " blir: " << fixed << setprecision(1) << medelvarde << endl;	// Skriver ut medelvärdet med 1 decimals noggrannhet 
																				// Genom << fixed << setprecision(1) <<
    
  
 return 0;
}

