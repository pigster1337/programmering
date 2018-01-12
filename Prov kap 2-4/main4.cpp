//Uppgift 4, Isak Wikman

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  
    cout << endl << "Mata in timmar, minuter och sekunder. Använd heltal" << endl << "Timmar: " << endl;			
      int timmar;
      cin >> timmar;														
    cout << "Minuter: " << endl;
      int minuter;
      cin >> minuter;
    cout << "Sekunder: " << endl;									// I första "stycket" ger jag tidsangivelserna typen int och så matas ett antal timmar, minuter, sekunder in och så vidare.
      int sekunder;
      cin >> sekunder;
      
    minuter = minuter+(sekunder/60);									// Antalet minuter blir det antal minuter man skrev in + så många hela minuter det finns i sekundangivelsen
    sekunder = sekunder%60;										// Så många sekunder det blir över 
    timmar = timmar+(minuter/60);									// Timmarna blir det antal timmar man skrev in + så många hela timmar det finns i minuter
    minuter = minuter%60;										// Så många många minuter det blir över
    
    cout << "Den totala tiden motsvaras av " << timmar << " timmar, " << minuter << " minuter och " << sekunder << "sekunder." << endl;
  
 return 0;
}
 
