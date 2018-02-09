
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{
  

    cout << "Mata in ett värde för att beräkna fakultet: ";
    int t;
    int fakultet = 1;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
      fakultet = i*fakultet;
      
    }
    
    for(int i = 1; i <= fakultet; i++)
    {
      
      cout << "*";
    }
    cout << endl;
    
  
   return 0;							
}

