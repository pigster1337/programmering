// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  double tal[3];
  cout << "Mata in tre tal: " << endl;
  cin >> tal[0] >> tal[1] >> tal[2];
  double summa = tal[0]+tal[1]+tal[2];
  double medelvarde = summa/3;
  cout << "Medelvärde: " << medelvarde << endl << "Summa: " << summa << endl;

    return 0;							// Här avslutas programmet
}
