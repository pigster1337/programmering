// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  cout << "T�nk p� ett tal och skriv det h�r: " << endl;
  int tal1;
  cin >> tal1;
  int tal1ny = tal1 + 1;
  tal1ny *= 2;
  tal1ny -= 6;
  tal1ny /= 2;
  tal1ny += 3;
  tal1ny -= tal1;
  cout << tal1ny << endl;
  

    return 0;							// H�r avslutas programmet
}
