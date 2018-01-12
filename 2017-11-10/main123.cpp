// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

    int taljare;
    int namnare;
    cout << "Skriv in täljare och nämnare: " << endl;
    cin >> taljare >> namnare;
    heltal = taljare/namnare;
    resten = taljare%namnare;
    cout << "Talet " << taljare << '/' << namnare << " är lika med: " << heltal << ' ' << resten << endl;
  
    return 0;							// Här avslutas programmet
}
