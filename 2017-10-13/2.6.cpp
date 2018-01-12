// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  double tal;
  cout << "Mata in ett decimaltal" << endl;
  cin >> tal;
  tal = tal+0.5;
  cout << "Talet avrundat är: " << (int)tal << endl;

    return 0;							// Här avslutas programmet
}
