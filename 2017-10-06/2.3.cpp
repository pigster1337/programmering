// Ett f�rsta exempel
#include <iostream>
						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

  double tal1;
  double tal2;
  cout << "Mata in tv� tal: " << endl;
  cin >> tal1 >> tal2;
  cout << "Talens v�rde �r: " << endl << tal1 << endl << tal2 << endl;
  // Talen m�ste matas in med . och inte ,
  
  
  
    return 0;							// H�r avslutas programmet
}
