// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

float tal1;
float tal2;
float tal3;
float medelvarde;
float summa;

cout << "Mata in tre tal: " << endl;
cin >> tal1 >> tal2 >> tal3;
summa = tal1+tal2+tal3;
medelvarde = (tal1+tal2+tal3)/3;
cout << "Medelv�rdet av talen blir: " << fixed << setprecision (2) << medelvarde << endl;
cout << "Summan av talen blir: " << fixed << setprecision (2) << summa << endl;

  
  


return 0;							// H�r avslutas programmet
}
