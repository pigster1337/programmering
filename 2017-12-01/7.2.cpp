// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

    cout << "Hur långt har du till arbetet?"<< endl;
    float distans;
    cin >> distans;
    cout << "Hur länge har arbetet pågått?" << endl;
    float tid;
    cin >> tid;
    cout << "Är du ensamstående? j/n" << endl;
    char par;
    cin >> par;
    if(distans >= 50 && tid >= 3 && par == 'n')
    {
      cout << "Du kan göra skatteavdrag. " << endl;
    }
    else if(distans >= 50 && tid >= 1 && par == 'j')
    {
      cout << "Du kan göra skatteavdrag. " << endl;
    }
    else
    {
      cout << "Du kan ej göra skatteavdrag. " << endl;
    }
    
   return 0;							// H r avslutas programmet
}
