// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

  double tal[4];
  cout << "Mata in fyra heltal: " << endl;
  cin >> tal[0] >> tal[1] >> tal[2] >> tal[3];
  double temp = tal[0];
  tal[0] = tal[3];
  tal[3] = temp;
  double temp2 = tal[1];
  tal[1] = tal[2];
  tal[2] = temp2;
 
  cout << "Talen i omvänd ordning är: " << tal[0] << ' ' << tal[1] << ' ' << tal[2] << ' ' << tal[3] << endl;

    return 0;							// Här avslutas programmet
}
