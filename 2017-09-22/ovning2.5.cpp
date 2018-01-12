// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
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
cout << "Medelvärdet av talen blir: " << fixed << setprecision (2) << medelvarde << endl;
cout << "Summan av talen blir: " << fixed << setprecision (2) << summa << endl;

  
  


return 0;							// Här avslutas programmet
}
