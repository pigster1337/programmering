// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{


    cout << "Hur gammal är du? " << endl;
    double alder;
    cin >> alder;
    if ( (alder > 15) && (alder < 65) )
    {
      cout << "Din resa kostar 10kr" << endl;
    }
    
    else
    {
      cout << "Din resa kostar 5kr" << endl;
    }

   return 0;							// H r avslutas programmet
}
