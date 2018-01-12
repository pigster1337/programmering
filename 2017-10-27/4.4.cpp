§++++++++++++++++++++++++++++// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  cout << "Mata in ett stort tal: " << endl;
  int tal;
  cin >> tal;
  tal = tal/1000*1000;
  cout << "Talet avrundat till hela tusental är: " << tal << endl;
  
  
    return 0;							// Här avslutas programmet
}
