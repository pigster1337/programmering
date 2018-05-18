
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;	

double inmatning(double falt[]);
double utmatning(double falt[]);

int main ()							
{

  double falt[10];
  inmatning(falt);
  utmatning(falt);
   
    
  
   return 0;							
}


double inmatning(double falt[10])
{
 
  
  for(int i = 0; i < 10; i++)
  {
   cout << "Mata in tal " << i+1 << ": ";
   cin >> falt[i];

  }
}

double utmatning(double falt[10])
{
  
  double y = 0;
 
  for(int i = 0; i < 10; i++)
  {
   if (y < falt[i])
   {
    y = falt[i]; 
   }
    
  }
  cout << "Det största talet är: " << y << endl;
  
  
  
}