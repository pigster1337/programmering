// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

    cout << "Vilken väg ska du åka? h/v" << endl;
    char val;
    cin >> val;
    if (val == 'h')
    {
      cout << "Oh hell no, åk vänster" << endl;
    }
    else 
    {
      cout << "Okej din jude akta dig för gasen" << endl;
    }
    
   return 0;							// H r avslutas programmet
}
