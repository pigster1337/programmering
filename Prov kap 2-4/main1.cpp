//Uppgift 1, Isak Wikman

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  
    cout << "Mata in en gemen (liten bokstav): " << endl;  				// Säger åt att mata in en gemen
      char gemen;					   				// ger gemenen typen 'char' eftersom att det är en bokstav.
	cin >> gemen;					   				// Matar in en gemen
      char versal = gemen-32;				   				// versal som är av typen char (bokstav) får värdet av gemenen minus 32 för att få samma bokstav men som versal (registret i boken)
    cout << "Bokstavens motsvarande versal är: " << versal << endl;			// Skriver ut svaret
  
 return 0;
}
