// Ett f�rsta exempel
#include <iostream>
						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
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
  cout << "Summan av de tv� f�rsta talen minus det sista �r: " << summa << endl;
  
  

  
  
    return 0;							// H�r avslutas programmet
}
