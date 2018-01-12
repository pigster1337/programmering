// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

    cout << "Mata in ett heltal: " << endl;
    int i;
    cin >> i;
    if (i>= 10)
    {
      cout << "Du matade in ett tal, större eller lika med 10" << endl;;
    }
    else   // if (i<10)
    {
      cout << "Du matade in ett tal, mindre än 10" << endl;
    }
   return 0;							// Här avslutas programmet
}
