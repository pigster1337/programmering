// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  double tal[3];
  cout << "Mata in tre tal: " << endl;
  cin >> tal[0] >> tal[1] >> tal[2];
  double summa = tal[0]+tal[1]+tal[2];
  double medelvarde = summa/3;
  cout << "Medelv�rde: " << medelvarde << endl << "Summa: " << summa << endl;

    return 0;							// H�r avslutas programmet
}
