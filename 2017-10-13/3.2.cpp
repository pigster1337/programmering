// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
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
 
  cout << "Talen i omv�nd ordning �r: " << tal[0] << ' ' << tal[1] << ' ' << tal[2] << ' ' << tal[3] << endl;

    return 0;							// H�r avslutas programmet
}
