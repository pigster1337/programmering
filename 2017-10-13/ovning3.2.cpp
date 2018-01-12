// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  int tal[3];
  cout << "Mata in tre heltal: " << endl;
  cin >> tal[0] >> tal[1] >> tal[2];
  int temp = tal[0];
  tal[0] = tal[2];
  tal[2] = temp;
  
  cout << "Den nya talföljden är: " << tal[0] << ' ' << tal[1] << ' ' << tal[2] << endl;

    return 0;							// Här avslutas programmet
}
