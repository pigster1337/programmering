// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

    double sekunder;
    cout << "Mata in ett antal sekunder: ";
    cin >> sekunder;
    double timmar = sekunder/3600;
    double minuter = sekunder/60;
    cout << timmar << ' ' << minuter << sekunder << endl;
  
    return 0;							// H�r avslutas programmet
}
