// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

    int taljare;
    int namnare;
    cout << "Skriv in t�ljare och n�mnare: " << endl;
    cin >> taljare >> namnare;
    heltal = taljare/namnare;
    resten = taljare%namnare;
    cout << "Talet " << taljare << '/' << namnare << " �r lika med: " << heltal << ' ' << resten << endl;
  
    return 0;							// H�r avslutas programmet
}
