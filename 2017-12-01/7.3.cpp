// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

    cout << "Skriv ett tal: ";
    float tal;
    cin >> tal;
    if (tal<0)
    {
      cout << "Talet är negativt" << endl;
    }
    else if (tal == 0)
    {
      cout << "Talet är 0" << endl;
    }
    else if (tal > 0)
    {
      cout << "Talet är positivt" << endl;
    }
    
   return 0;							// H r avslutas programmet
}
