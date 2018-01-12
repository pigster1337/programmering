// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

int tal = -2147483648;
cout << endl << "Talets värde är: " << tal << endl << "Talets värde minskas med ett. " << endl;
tal = tal-1;
cout << "Talet är nu: " << tal << endl << endl;

  
  


return 0;							// Här avslutas programmet
}
