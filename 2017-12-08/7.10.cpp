// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{
    
    string text;
    string ord;
    
    cout << "Skriv en text: "; getline(cin, text);
    cout << "Skriv ordet som du vill leta efter: "; getline(cin, ord);
    
    int plats = text.find(ord, 0);
    
    if (plats >= 0)
    {
      int langd = ord.length();
      string hej = text.substr(plats, langd);
      cout << hej << endl;
    }
    else
    {
      cout << "Ordet finns ej" << endl;
    }
  
  
   return 0;							// H r avslutas programmet
}