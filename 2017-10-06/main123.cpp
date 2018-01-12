// Ett första exempel
#include <iostream>
						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{
  
  char tecken = 'B';
  cout << (int)tecken << endl;
  
  
  /*int tal = 3;
  float flyttal = tal;
  cout << flyttal << endl;
  flyttal = 4.89;
  tal =flyttal;
  cout << tal << endl;*/
  
  
  //float PI = 3.14159;
  //PI = PI +1;
  
  
  /*double f = 3.14159;
  cout << setprecision(5) << f << endl;
  cout << setprecision(9) << f << endl;
  // Om det sker ett fel vid körningen
  // cout << 7/0 << endl;
  // avbryts programmet och returnerar (skickar)
  // heltal skilt från 0 till 0S.
  cout << fixed << setprecision(5) << f << endl;
  cout << setprecision(9) << f << endl;*/
  
  
    return 0;							// Här avslutas programmet
}
