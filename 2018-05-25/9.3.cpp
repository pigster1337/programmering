
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;	


void ritaromb(int langd, int hojd);


int main ()							
{

    int langd, hojd;
    ritaromb(langd, hojd);
    

  return 0;
  
}

void ritaromb(int langd, int hojd)
{
 
  cout << "Hur lång ska varje rad vara? ";
  cin >> langd;
  cout << "Hur hög ska romben vara? ";
  cin >> hojd;
  
  
  for(int i = 0; i < hojd; i++)
  {
   
    for(int i =0; i < langd; i++)
    {
      
     cout << '*'; 
     
    }
    
    cout << endl;
    

    
    
  }
  cout << endl;
}