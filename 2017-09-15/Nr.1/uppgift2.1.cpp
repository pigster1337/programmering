// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

int tal1;
int tal2;
int tal3;
cout << "Mata in tre tal: " << endl;
cin >> tal1 >> tal2 >> tal3;
int summa = tal1+tal2-tal3;
cout << "Summan av talen �r: " << summa << endl;

    

  
  
  
    return 0;							// H�r avslutas programmet
} 
