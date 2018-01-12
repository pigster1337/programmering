// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  cout << "Mata in ett engelskt ord: " << endl;
  char engord[20];
  cin >> engord;
  cout << "Mata in den svenska översättningen: " << endl;
  char sveord[20];
  cin >> sveord;
  cout << "Det engelska ordet " << engord << " betyder " << sveord << " på svenska. " << endl;

    return 0;							// Här avslutas programmet
}
