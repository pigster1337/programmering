// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{


    double hojd;
    cout << "Ange pudelns mankhöjd: ";
    cin >> hojd;
    if (hojd > 28 && hojd < 35)
    {
      cout << "Det är en dvärgpudel!" << endl;
    }
    
    else
    {
      cout << "Det är ingen dvärgpudel!" << endl;
    }

   return 0;							// Här avslutas programmet
}
