// Ett första exempel
#include <iostream>
						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  char a;
  
  cout << "Mata in ett tecken: " << endl;
  cin >> a;
  cout << "Ditt teckens Unicode är: "<< (int)a << endl;
  
  
  
    return 0;							// Här avslutas programmet
}
