// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

    cout << "Om du skulle åka på en kortare resa, skulle du föredra att åka bil (b), buss (B), tåg (t) eller cykla (c)?" << endl;
    char fard;
    cin >> fard;
    switch (fard)
    {
      case 'b':
	cout << "Du valde, bil" << endl;
	break;
      case 'B':
	cout << "Du valde, buss" << endl;
	break;
      case 't':
	cout << "Du valde, tåg" << endl;
	break;
      case 'c':
	cout << "Du valde, cykla" << endl;
	break;
      default:
	cout << "Felinmatning, tänk på att bara skriva t.ex. \"bil\"" << endl;
	break;
    }
	
    
   return 0;							// H r avslutas programmet
}
