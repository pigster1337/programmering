// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

    cout << "Mata in ett tal: " << endl;
    float a;
    cin >> a;
    cout << "Mata in ett till tal: " << endl;
    float b;
    cin >> b;
    
    if (a>b)
    {
      cout << "Det första talet, " << a << ", är större. " << endl;
    }
    else   // if (i<10)
    {
      cout << "Det andra talet, " << b << ", är större. " << endl;
    }
   return 0;							// Här avslutas programmet
}
