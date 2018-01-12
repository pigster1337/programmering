// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

int tal1;
int tal2;
int tal3;
cout << "Mata in tre tal: " << endl;
cin >> tal1 >> tal2 >> tal3;
int summa = tal1+tal2-tal3;
cout << "Summan av talen är: " << summa << endl;

    

  
  
  
    return 0;							// Här avslutas programmet
} 
