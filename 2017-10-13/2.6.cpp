// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  double tal;
  cout << "Mata in ett decimaltal" << endl;
  cin >> tal;
  tal = tal+0.5;
  cout << "Talet avrundat �r: " << (int)tal << endl;

    return 0;							// H�r avslutas programmet
}
