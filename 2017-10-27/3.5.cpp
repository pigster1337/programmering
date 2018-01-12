// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  cout << "Skriv ditt namn och efternamn: " << endl;
  string namn;
  getline (cin, namn);
  int mellanslag = namn.find(' ', 0);
  string fornamn = namn.substr(0, mellanslag);
  string efternamn = namn.substr(mellanslag+1, 20);
  cout << "Ditt namn är: " << efternamn << ", " << fornamn << endl;

    return 0;							// Här avslutas programmet
}
