//Uppgift 4, Isak Wikman

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  
    cout << endl << "Mata in timmar, minuter och sekunder. Anv�nd heltal" << endl << "Timmar: " << endl;			
      int timmar;
      cin >> timmar;														
    cout << "Minuter: " << endl;
      int minuter;
      cin >> minuter;
    cout << "Sekunder: " << endl;									// I f�rsta "stycket" ger jag tidsangivelserna typen int och s� matas ett antal timmar, minuter, sekunder in och s� vidare.
      int sekunder;
      cin >> sekunder;
      
    minuter = minuter+(sekunder/60);									// Antalet minuter blir det antal minuter man skrev in + s� m�nga hela minuter det finns i sekundangivelsen
    sekunder = sekunder%60;										// S� m�nga sekunder det blir �ver 
    timmar = timmar+(minuter/60);									// Timmarna blir det antal timmar man skrev in + s� m�nga hela timmar det finns i minuter
    minuter = minuter%60;										// S� m�nga m�nga minuter det blir �ver
    
    cout << "Den totala tiden motsvaras av " << timmar << " timmar, " << minuter << " minuter och " << sekunder << "sekunder." << endl;
  
 return 0;
}
 
