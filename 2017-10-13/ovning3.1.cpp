// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  double tal[4];
  cout << "Mata in 4 tal: " << endl;
  cin >> tal[0] >> tal[1] >> tal[2] >> tal[3];
  cout << "Talen som matades in och ing�r i f�ltet �r: " << endl << tal[0] << endl << tal[1] << endl << tal[2] << endl << tal[3] << endl;

    return 0;							// H�r avslutas programmet
}
