// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

    cout << "Vad är ditt kön? m/k" << endl;
    char kon;
    cin >> kon;
    if(kon == 'm')
    {
      cout << "Du är en man" << endl;
    }
    else 
    {
      cout << "Du är en kvinna" << endl;
    }
    
   return 0;							// H r avslutas programmet
}
