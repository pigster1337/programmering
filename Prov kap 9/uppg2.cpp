
// Uppgift 2, Isak Wikman
#include <iostream>						
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

void star();														// Deklarerar funktioner
void hoger(int& x);													// Referensparameter för x så att den är samma överallt
void vanster(int& x);

int main ()							
{

   star();														// Anropar funktionen star
    
  
   return 0;							
}


void star()														// I star körs "menyn" minst en gång, sedan beror det på vad man matar in.
{															
  
  char in;
  int x = 0;
 
    do
    {
      cout << endl << "Mata in h (höger), v (vänster) eller avsluta programmet med s: " << endl;
      cin >> in;
      
	if(in == 'h')													// Om man matar in h anropas funktionen hoger
	{
	  hoger(x);
	}
      
	else if(in == 'v')												// Om man matar in v anropas funktionen vanster
	{
	  vanster(x);
	}
	
	else if(in != 'h'&& in != 'v' && in != 's')									// Om man matar in något annat än h, v eller s får man ett felmeddelande och 
	{														// får försöka igen
	 cout << "Felinmatning" << endl; 
	}
      
    }while(in != 's');													// Loopen körs tills in != s
  
  
  
  
  
}


void hoger(int& x)
{
  if(x < 5)														// Om x < 5 blir x ett större och sedan skrivs x antal * ut
  {
    x++;
      for(int i = 0; i < x; i++)
      {
	cout << '*';
      }
    cout << endl;
  }
  
  else															// Om x inte är < 5 blir inte x ett större, utan samma antal * som innan
  {															// skrivs ut
    cout << "Inte möjligt att mata in 'h' " << endl; 
    
      for(int i = 0; i < x; i++)
      {
	cout << '*';
      }
    cout << endl;
  }
}

void vanster(int& x)
{
  if(x > 1)														// Om x > 1 blir x ett mindre och sedan skrivs x antal * ut
  {
    x--;
      for(int i = 0; i < x; i++)
      {
	cout << '*';
      }
    cout << endl;
  }
  
  else															// Om x inte är > 1 blir inte x ett mindre, utan samma antal * som innan
  {															// skrivs ut
    cout << "Inte möjligt att mata in 'v' " << endl; 									
    
      for(int i = 0; i < x; i++)
      {
	cout << '*';
      }
      
    cout << endl;

  }
  
}