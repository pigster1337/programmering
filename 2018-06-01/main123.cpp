
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;	

void meny(int falt[], int& antal);
void skrivutfalt(int falt[], int& antal);
void soktal(int falt[], int& antal);
void talplats(int falt[], int& antal);


int main ()							
{
    
    int antal;
    int falt[100];
      
    meny(falt, antal);
    skrivutfalt(falt, antal);
    soktal(falt, antal);
    talplats(falt, antal);
    
    
    return 0;
						
}

void meny(int falt[], int& antal)
{
  
  cout << "Du ska mata in ett antal heltal, minst 1 och högst 100. \nHur många tal vill du mata in? ";
  cin >> antal;
  
  for (int i=0; i < antal; i++)
  {
   
    cout << "Mata in tal " << i+1 << ": ";
    cin >> falt[i];
  }
  
}


void skrivutfalt(int falt[], int& antal)
{
 
  cout << "Du matade in: ";
  for(int i = 0; i < antal; i++)
  {
   
    cout << falt[i] << ' ';
    
  }
  cout << endl;
  
}


void soktal(int falt[], int& antal)
{
  
  int x = 0;
  int soktal;
  cout << "Sök tal: ";
  cin >> soktal;
  
  
  for(int i = 0; i < antal; i++)
  {
    
    if(soktal == falt[i])
    {
     x++; 
    }
    
  }
  
  cout << "Talet " << soktal << " förekommer " << x << " gång - er. " << endl;
  
}



void talplats(int falt[], int& antal)
{
  
  int i=0;
  int soktal;
  cout << "Sök tal: ";
  cin >> soktal;
  
    while ( (falt[i] != soktal) && (i<antal) )
      {
	i++;
      }
    if (i<antal)
    {
      cout << "Det sökta talet hittas första gången på position " << i+1 << endl;
    }
  
}