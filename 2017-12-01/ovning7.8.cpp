// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

    cout << "Mata in två strängar: " << endl;
    string a;
    string b;
    getline(cin, a);
    getline(cin,b);
    string c = a.substr(0, 1);
    string d = b.substr(0, 1);
    if(c<d)
    {
      cout << a << endl;
    }
    else 
    {
      cout << b << endl;
    }
    
   return 0;							// H r avslutas programmet
}
