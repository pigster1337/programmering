// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

    cout << "Mata in ett heltal: " << endl;
    int i;
    cin >> i;
    if (i>= 10)
    {
      cout << "Du matade in ett tal, st�rre eller lika med 10" << endl;;
    }
    else   // if (i<10)
    {
      cout << "Du matade in ett tal, mindre �n 10" << endl;
    }
   return 0;							// H�r avslutas programmet
}
