// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

  /*
    for (int j=0; j<10; j++)
    {
	for (int i=0; i<10; i++)
	{
	  cout << i << ' ';
	  
	}
	cout << endl;
    }
    */
  
    int falt[100][100];
    /*falt[0][0] = 19;
    cout << falt[0][0] << endl;*/
    
    for (int j=0; j<100; j++)
    {
	for (int i=0; i<100; i++)
	{
	  falt[j][i]= j+i;
	  
	}
    }
    
    cout << "Inmatningen i det tvådemnsionella fältet klart" << endl;
    
    for (int j=0; j<100; j++)
    {
	for (int i=0; i<100; i++)
	{
	  cout << "Gun är min son " << falt[j][i] << " gånger." << ' ';
	  
	}
	cout << endl;
    }
    
    
    
  
  
   return 0;							// H r avslutas programmet
}
