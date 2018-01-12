// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{
  /* Exempel 4.2
  int tid = 800;
  int min = tid/60;
  int sek = tid%60;
  cout << tid << " s = " << min << " min och " << sek << " s." << endl;*/
  
  /*int tal = 2;
  //tal += 1;
  //cout << tal << endl;
  //cout << tal++ << endl;  //2
  //cout << tal << endl;  //3
  int tal2 = tal++;
  cout << tal2 << endl;*/
  
  //Övning 4.5
  
  int tal1 = 5 + 6%4;
  int tal2 = (5 +6)%4;
  double tal3 = 5;
  tal3 *= 2.5 + 1;
  
  cout << "Tal 1 = "<< tal1 << " , Tal 2 är = " << tal2 << " , Tal 3 är = " << tal3 << endl;

    return 0;							// Här avslutas programmet
}
