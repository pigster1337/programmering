// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  cout << 56789*100/100 << endl;
  cout << 56789/100*100 << endl;
  cout << (56789+50)/100*100 << endl;
  cout << (56789+500)/1000*1000 << endl;
  cout << (int)(234.65+0.5) << endl;
  
    return 0;							// H�r avslutas programmet
}
