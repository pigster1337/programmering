// Ett f�rsta exempel
#include <iostream>
						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  char a;
  
  cout << "Mata in ett tecken: " << endl;
  cin >> a;
  cout << "Ditt teckens Unicode �r: "<< (int)a << endl;
  
  
  
    return 0;							// H�r avslutas programmet
}
