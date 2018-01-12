// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
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
  
  // flyt och falt2[0] är helt ekvivalenta

    return 0;							// Här avslutas programmet
}
