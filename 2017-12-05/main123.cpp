// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

    int counter = 0;
    int falt[10];
    
    while (counter < 10)
    {
      cout << counter << ' ';
      falt[counter] = counter;					// "Falt, plats med index counter 0-9 tilldelas värdet counter 0-9
      counter++;
    }
    cout << endl << "Utskrift sker" << endl;
    counter = 0;
    
        while (counter < 10)
    {
      cout << falt[counter] << ' ';
      falt[counter] = counter;					// "Falt, plats med index counter 0-9 skrivs ut värdet counter 0-9
      counter++;
    }
    
   return 0;							// H r avslutas programmet
}
