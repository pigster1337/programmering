// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  double tal[4];
  cout << "Mata in 4 tal: " << endl;
  cin >> tal[0] >> tal[1] >> tal[2] >> tal[3];
  cout << "Talen som matades in och ingår i fältet är: " << endl << tal[0] << endl << tal[1] << endl << tal[2] << endl << tal[3] << endl;

    return 0;							// Här avslutas programmet
}
