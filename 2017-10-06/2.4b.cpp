// Ett första exempel
#include <iostream>
						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  int tal1;
  
  cout << "Mata in ett heltal: " << endl;
  cin >> tal1;
  cout << "Ditt tals Unicode är: " << (char)tal1 << endl;
  
  
    return 0;							// Här avslutas programmet
}
