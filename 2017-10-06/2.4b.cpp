// Ett f�rsta exempel
#include <iostream>
						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  int tal1;
  
  cout << "Mata in ett heltal: " << endl;
  cin >> tal1;
  cout << "Ditt tals Unicode �r: " << (char)tal1 << endl;
  
  
    return 0;							// H�r avslutas programmet
}
