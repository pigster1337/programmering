// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

      
   cout << "Vad är dittkön? (m/k)" << endl; 
   char kon;
   cin >> kon;
   cout << "Hur gammal är du?"<< endl;
   int alder;
   cin >> alder;
   cout << "Hur många barn har du?" << endl;
   int barn;
   cin >> barn;
   
   if (kon == 'm' && alder < 30)
   {
     cout << "Eftersom du är man och under 30 får du jobbet! " << endl;
   }
   else if (kon == 'm' && barn == 0)
   {
     cout << "Eftersom du är man och inte har barn får du jobbet! " << endl;
   }
   else if (barn == 0 && alder < 30)
   {
     cout << "Eftersom inte har barn och under 30 får du jobbet! " << endl;
   }
   else
   {
     cout << "Du är ej kvalificerad för jobbet. " << endl;
   }
   
  
  
   return 0;	// H r avslutas programmet
}
