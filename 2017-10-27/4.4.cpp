�++++++++++++++++++++++++++++// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  cout << "Mata in ett stort tal: " << endl;
  int tal;
  cin >> tal;
  tal = tal/1000*1000;
  cout << "Talet avrundat till hela tusental �r: " << tal << endl;
  
  
    return 0;							// H�r avslutas programmet
}
