// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{


    double hojd;
    cout << "Ange pudelns mankh�jd: ";
    cin >> hojd;
    if (hojd > 28 && hojd < 35)
    {
      cout << "Det �r en dv�rgpudel!" << endl;
    }
    
    else
    {
      cout << "Det �r ingen dv�rgpudel!" << endl;
    }

   return 0;							// H�r avslutas programmet
}
