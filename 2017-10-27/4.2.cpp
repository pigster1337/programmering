// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  cout << "Tänk på ett tal och skriv det här: " << endl;
  int tal1;
  cin >> tal1;
  int tal1ny = tal1 + 1;
  tal1ny *= 2;
  tal1ny -= 6;
  tal1ny /= 2;
  tal1ny += 3;
  tal1ny -= tal1;
  cout << tal1ny << endl;
  

    return 0;							// Här avslutas programmet
}
