// Ett första exempel
#include <iostream>
						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  double tal1;
  double tal2;
  cout << "Mata in två tal: " << endl;
  cin >> tal1 >> tal2;
  cout << "Talens värde är: " << endl << tal1 << endl << tal2 << endl;
  // Talen måste matas in med . och inte ,
  
  
  
    return 0;							// Här avslutas programmet
}
