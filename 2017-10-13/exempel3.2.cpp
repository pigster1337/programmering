// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  int vikt[] = {67,54};
  cout << "Vikterna är: " << endl << vikt[0] << endl << vikt[1] << endl;
  int temp = vikt[0];
  vikt[0] = vikt[1];
  vikt[1] = temp;
  
  cout << "Vikterna efter bytet är: " << endl << vikt[0] << endl << vikt[1] << endl;

    return 0;							// Här avslutas programmet
}
