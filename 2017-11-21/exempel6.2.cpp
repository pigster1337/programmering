// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

    cout << "Mata in ett tal: " << endl;
    float a;
    cin >> a;
    cout << "Mata in ett till tal: " << endl;
    float b;
    cin >> b;
    
    if (a>b)
    {
      cout << "Det f�rsta talet, " << a << ", �r st�rre. " << endl;
    }
    else   // if (i<10)
    {
      cout << "Det andra talet, " << b << ", �r st�rre. " << endl;
    }
   return 0;							// H�r avslutas programmet
}
