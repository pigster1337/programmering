// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  cout << "Skriv ditt namn och efternamn: " << endl;
  string namn;
  getline (cin, namn);
  int mellanslag = namn.find(' ', 0);
  string fornamn = namn.substr(0, mellanslag);
  string efternamn = namn.substr(mellanslag+1, 20);
  cout << "Ditt namn �r: " << efternamn << ", " << fornamn << endl;

    return 0;							// H�r avslutas programmet
}
