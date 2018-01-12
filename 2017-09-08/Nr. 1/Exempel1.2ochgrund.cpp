// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

    cout << "\"Tjena Simpaaaaa\"! " << endl;			// Här skrivs en text till skärmen. Datorns standardutenhet, definierat i operativsystemet (skärmen). << är utmatingsoperatorn. (matar ut till skärmen)
    cout << "\"tjenare\" " << endl;
    cout << endl;
    cout << "Kod på två rader ";
    cout << "men utskrift på en rad " << endl;
    cout << endl;
    cout << "En rad kod, " << endl << "utskrift på två ";
    cout << endl;

    return 0;							// Här avslutas programmet
}
