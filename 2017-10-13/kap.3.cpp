// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  // datatyp namn[positivt heltal];
  double falt[3];
  
  /* 3 "fack" att placera flyttal i, indexeras 0-2 */
  // Tilldelning
  falt[0]=0;
  falt[1]=1;
  falt[2]=2;
  
  // deklarera och tilldela
  double falt2[3]={3.56,6.4,0.3};
  double falt3[]={3.56,6.4,0.3};
  
  double flyt = 3.56;
  
  // flyt och falt2[0] �r helt ekvivalenta

    return 0;							// H�r avslutas programmet
}
