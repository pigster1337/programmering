// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{
  
  
  do 
  {
    cout << "Sant 1" << endl;
    cout << "Sant 2" << endl;
    
  } while (1>2);
  
  

    while (1>2)
    {
      cout << "Sant 1" << endl;
      cout << "Sant 2" << endl;
    }
    
    int a = 0;
    while (a<10)
    {
      cout << a++ <<endl;
    }
    
    for (int b=0; b<10; b++)
    {
      cout << b << endl;
    }
   return 0;							// H r avslutas programmet
}