// Ett första exempel
#include <iostream>
						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  int x = 2.75;
  double y = 'a';
  char z = 102;
  
  cout << x << endl << y << endl << z << endl;

  
  // x = 2
  // y = 97
  // z = f
  
  
    return 0;							// Här avslutas programmet
}
