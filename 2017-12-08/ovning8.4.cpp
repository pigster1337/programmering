// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{
    
    int hastighet[8];
    cout << "m/s               km/h" << endl;
    
    for ( int n = 0; n < 8; n++)
    {
      hastighet[n] = 5*(n);
      cout << hastighet[n] << "                 " << hastighet[n]*3.6 << endl;
    }
  
  
   return 0;							// H r avslutas programmet
}