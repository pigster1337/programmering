// Ett första exempel
#include <iostream>
						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{
  float tal1;
  float tal2;
  float tal3;
  float summa;
  
  cout << "Mata in ett tal: " << endl;
  cin >> tal1;
  cout << "Mata in ett nytt tal: " << endl;
  cin >> tal2;
  cout << "Mata in ett nytt tal: " << endl;
  cin >> tal3;
  
  summa = tal1+tal2-tal3;
  cout << "Summan av de två första talen minus det sista är: " << summa << endl;
  
  

  
  
    return 0;							// Här avslutas programmet
}
