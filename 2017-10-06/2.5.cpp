// Ett f�rsta exempel
#include <iostream>
						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  char tecken1;
  char tecken2;
  char tecken3;
  
  cout << "Mata in en bokstav: " << endl;
  cin >> tecken1;
  tecken2 = tecken1 + 1;
  tecken3 = tecken1 + 2;
  cout << tecken1 << endl << tecken2 << endl << tecken3 << endl;
  
  
  
    return 0;							// H�r avslutas programmet
}
