// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  cout << 56789*100/100 << endl;
  cout << 56789/100*100 << endl;
  cout << (56789+50)/100*100 << endl;
  cout << (56789+500)/1000*1000 << endl;
  cout << (int)(234.65+0.5) << endl;
  
    return 0;							// Här avslutas programmet
}
