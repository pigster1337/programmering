// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{


    cout << "Hur mycket bränsle har din bil? " << endl;
    double bransle;
    cin >> bransle;
    if (bransle < 10)
    {
      
      cout << "Du bör tanka. Du kan fylla på maximalt " << 50-bransle << " liter bensin, vilket kostar " << (50-bransle)*9.5 << " kronor" << endl;
    }
    
    else
    {
      cout << "Kör vidare" << endl;
    }

   return 0;							// H r avslutas programmet
}
