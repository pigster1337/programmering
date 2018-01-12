// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

    double sekunder;
    cout << "Mata in ett antal sekunder: ";
    cin >> sekunder;
    double timmar = sekunder/3600;
    double minuter = sekunder/60;
    cout << timmar << ' ' << minuter << sekunder << endl;
  
    return 0;							// Här avslutas programmet
}
