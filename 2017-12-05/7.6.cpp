// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

    int a = 2;
    int b;
    cout << "Gissa vilket tal jag tänker på mellan 1 och 3" << endl;
    cin >> b;
    
    if (b == a)
    {
      cout << "Rätt svar. Du klarade det på ett försök." << endl;
    }
    else
    {
      cout << "Fel svar, försök igen!" << endl;
	cin >> b;
	
	  if (b == a)
	  {
	    cout << "Rätt svar, du klarade det på två försök! " << endl;
	  }
	  else
	  {
	    cout << "Fel svar, rätt nummer var 2! " << endl;
	  }
    }
	  
    
   return 0;							// H r avslutas programmet
}
