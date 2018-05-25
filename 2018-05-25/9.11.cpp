
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;	


  
double talskillnad(double falt[], int& antal);
double inmatning(double falt[], int& antal);



int main ()							
{

    double falt[100];
    int antal;
    
    inmatning(falt, antal);
    talskillnad(falt, antal);
    
   
    

  
  
}


double inmatning(double falt[], int& antal)
{
  
  cout << "Hur många tal vill du mata in? (Max: 100)" << endl;
  cin >> antal;
  
  if(antal <= 100)
  {
      for(int i = 0; i < antal; i++)
      {
      cout << "Mata in tal " << i+1 << ": ";
      cin >> falt[i];
      }
  }
  
  
}

double talskillnad(double falt[], int& antal)
{
 
  double x = falt[0];
  double y = falt[0];
  
  
  for(int i = 0; i < antal; i++)
  {
    if(x <= falt[i])
    {
      x = falt[i]; 
    }
  }
  
  for(int i = 0; i < antal; i++)
  {
    if(y >= falt[i])
    {
      y = falt[i]; 
    }
  }
  

 cout << "Skillnaden mellan det största och minsta talet är: " << x-y << endl;
  
}
