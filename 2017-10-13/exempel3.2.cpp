// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  int vikt[] = {67,54};
  cout << "Vikterna �r: " << endl << vikt[0] << endl << vikt[1] << endl;
  int temp = vikt[0];
  vikt[0] = vikt[1];
  vikt[1] = temp;
  
  cout << "Vikterna efter bytet �r: " << endl << vikt[0] << endl << vikt[1] << endl;

    return 0;							// H�r avslutas programmet
}
