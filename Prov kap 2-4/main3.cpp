//Uppgift 3, Isak Wikman

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  
    cout << "Mata in din text: " << endl;				// S�ger �t att mata in en text
      string text;							// Ger texten som ska matas in typen string
      getline(cin, text);						// texten matas in genom getline kommandot
    cout << "Mata in tecken att leta efter: " << endl; 
      string tecken;							// Ger det tecken som programmet ska leta efter typen string
      getline(cin, tecken);						// Texten matas in genom getline kommandot
    int a = text.find(tecken, 0);					// Hittar v�rdet p� st�llet i texten d�r n�got st�r med det tecken man skrivit in
    string utdrag = text.substr(a, 4);					// Plockar ut en substring ifr�n "a" (d�r det f�rsta tecknet man skrivit in finns) och 4 tecken fram�t
    cout << '\"' << utdrag << "\" plockas ut!" << endl;			// Anv�nder \" f�r ett " -tecken.
    
  
 return 0;
}
 
