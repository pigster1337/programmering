#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    for (int a = 0; a < 20; a++)      
    {
      for(int b = 0; b < 10; b++)      // Eftersom att denna forsatsen skriver ut två tecken varje gång körs den bara 10 gånger.
      {
	cout << "0 1 ";
      }
      cout << endl;			// Radbrytning efter "0 1 " har skrivits 10 gånger (20 tecken). Börjar på ny rad 20 gånger.
    }					// Två forsatser inuti varandra skapar en tabell. Först skriver den första raden "0 1 "10 gånger. Sedan börjar det om på andra raden och fortsätter så tills rad 20.
    
  
   return 0;							
}

