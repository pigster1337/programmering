//Uppgift 2, Isak Wikman

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  
    cout << "Mata in tre flyttal: " << endl;                       						// S�ger �t att mata in tre flyttal
      double flyttal[3];											// G�r ett f�lt med typen double (flyttal) som har plats f�r 3 flyttal
      
    cout << "Tal 1: ";
      cin >> flyttal[0];
    cout << "Tal 2: ";
      cin >> flyttal[1];
    cout << "Tal 3: ";
      cin >> flyttal[2];											// Matar in tre flyttal i f�ltet
														
      double medelvarde = (flyttal[0]+flyttal[1]+flyttal[2])/3;							// Medelv�rdet av talen i f�ltet ber�knas
      
    cout << "Medelv�rdet av " << flyttal[0] << ", " << flyttal[1] << " och " << flyttal[2] << " blir: " << fixed << setprecision(1) << medelvarde << endl;	// Skriver ut medelv�rdet med 1 decimals noggrannhet 
																				// Genom << fixed << setprecision(1) <<
    
  
 return 0;
}

