//Uppgift 1, Isak Wikman

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  
    cout << "Mata in en gemen (liten bokstav): " << endl;  				// S�ger �t att mata in en gemen
      char gemen;					   				// ger gemenen typen 'char' eftersom att det �r en bokstav.
	cin >> gemen;					   				// Matar in en gemen
      char versal = gemen-32;				   				// versal som �r av typen char (bokstav) f�r v�rdet av gemenen minus 32 f�r att f� samma bokstav men som versal (registret i boken)
    cout << "Bokstavens motsvarande versal �r: " << versal << endl;			// Skriver ut svaret
  
 return 0;
}
