//Uppgift 3, Isak Wikman

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  
    cout << "Mata in din text: " << endl;				// Säger åt att mata in en text
      string text;							// Ger texten som ska matas in typen string
      getline(cin, text);						// texten matas in genom getline kommandot
    cout << "Mata in tecken att leta efter: " << endl; 
      string tecken;							// Ger det tecken som programmet ska leta efter typen string
      getline(cin, tecken);						// Texten matas in genom getline kommandot
    int a = text.find(tecken, 0);					// Hittar värdet på stället i texten där något står med det tecken man skrivit in
    string utdrag = text.substr(a, 4);					// Plockar ut en substring ifrån "a" (där det första tecknet man skrivit in finns) och 4 tecken framåt
    cout << '\"' << utdrag << "\" plockas ut!" << endl;			// Använder \" för ett " -tecken.
    
  
 return 0;
}
 
