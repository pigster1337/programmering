// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

    cout << "Mata in två tal: " << endl;
    float a, b;
    cin >> a >> b;
    if (a<b)
    {
      cout << a << endl;
    }
    else
    {
      cout << b << endl;
    }
    
   return 0;							// H r avslutas programmet
}
