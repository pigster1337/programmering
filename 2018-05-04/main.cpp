
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

struct Stader{
  string namn;
  float temp;
};
Stader sorteraStader(Stader stad[]);

int main ()							
{

  
    Stader stad[4];
    //jfr int stad[4] 
    cout << "Mata in 4 städer och ange deras nuvarande temperatur" << endl;
    for (int i = 0; i < 4; i++)
    {
     cout << "Stad nummer " << (i+1) << ": ";
     cin >> stad[i].namn;
     cout << "Vad är temperaturen i " << stad[i].namn << "? ";
     cin >> stad[i].temp;
     
      
    }
    
    //Funktion som hittar staden med högsta temperaturen
    Stader hogst;
    hogst = sorteraStader(stad);
  
    cout << hogst.namn << " är varmast, " << hogst.temp << " grader. " << endl;
    return 0;
}


Stader sorteraStader(Stader stad[])
{
  
    Stader x;
    x = stad[0];
    for(int i = 1; i < 4; i++)
    {
     if(x.temp <= stad[i].temp)
     {
      x.temp = stad[i].temp; 
      x.namn = stad[i].namn; 
     }
    }
    
    return x;
  
}