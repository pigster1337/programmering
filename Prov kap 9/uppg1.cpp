
// Uppgift 1, Isak Wikman
#include <iostream>						
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

bool volymberakning(double radie, double& volym);  										// Deklarerar en funktion som beräknar volymen och returnerar ett "bool-värde" (true eller false).
const double PI = 3.1415926536;													// Använder referensparametrar för volymen så att den är samma i main som i funktionen.
																// Egentligen kan man bara returnera ett värde (i detta fall 'true', men med referensparametrar
int main ()															// kan jag få med volymen också.
{

  
    double radie, volym;
    cout << "Mata in klotets radie: ";
    cin >> radie;
    
    bool utskrivning = volymberakning(radie, volym);										// Anropar funktionen
    
    if(utskrivning == true)
    {
      cout << "Klotets volym är " << volym << " längdenheter när radien är " << radie << " längdenheter" << endl;		// Skriver ut detta om funktionen returnerat true
    }
    
    else if(utskrivning == false)												// Skriver ut detta om funktionen returnerat false
    {
      cout << "Felaktigt invärde (" << radie << ") längdenheter" << endl;
    }
    
  
   return 0;							
}


bool volymberakning(double radie, double& volym)										// I funktionen sker beräkningen om radie >= 0 och den returnerar då true.
{
																// Om radie < 0 returneras false
  if(radie >= 0)
  {
    
    volym = (pow(radie, 3) * 4 * PI)/3;
    
    return true;
  }
 
  else
  {
    
    return false;
  }
  
}