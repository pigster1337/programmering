// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

int tal = -2147483648;
cout << endl << "Talets v�rde �r: " << tal << endl << "Talets v�rde minskas med ett. " << endl;
tal = tal-1;
cout << "Talet �r nu: " << tal << endl << endl;

  
  


return 0;							// H�r avslutas programmet
}
