// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  int tal[3];
  cout << "Mata in tre heltal: " << endl;
  cin >> tal[0] >> tal[1] >> tal[2];
  int temp = tal[0];
  tal[0] = tal[2];
  tal[2] = temp;
  
  cout << "Den nya talf�ljden �r: " << tal[0] << ' ' << tal[1] << ' ' << tal[2] << endl;

    return 0;							// H�r avslutas programmet
}
