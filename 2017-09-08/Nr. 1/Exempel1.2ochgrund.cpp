// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

    cout << "\"Tjena Simpaaaaa\"! " << endl;			// H�r skrivs en text till sk�rmen. Datorns standardutenhet, definierat i operativsystemet (sk�rmen). << �r utmatingsoperatorn. (matar ut till sk�rmen)
    cout << "\"tjenare\" " << endl;
    cout << endl;
    cout << "Kod p� tv� rader ";
    cout << "men utskrift p� en rad " << endl;
    cout << endl;
    cout << "En rad kod, " << endl << "utskrift p� tv� ";
    cout << endl;

    return 0;							// H�r avslutas programmet
}
