// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  cout << "Mata in ett engelskt ord: " << endl;
  char engord[20];
  cin >> engord;
  cout << "Mata in den svenska �vers�ttningen: " << endl;
  char sveord[20];
  cin >> sveord;
  cout << "Det engelska ordet " << engord << " betyder " << sveord << " p� svenska. " << endl;

    return 0;							// H�r avslutas programmet
}
