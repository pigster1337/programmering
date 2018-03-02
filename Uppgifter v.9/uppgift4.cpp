
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    
    int falt1[10];
    int falt2[10];
    int falt3[10];
    
    cout << "Mata in 10 tal i ett fält: " << endl;
    
    for(int a = 0; a < 10; a++)
    {
      cin >> falt1[a];
    }
    
    cout << "Mata in 10 tal i ett annat fält: " << endl;
    
    for(int a = 0; a < 10; a++)
    {
      cin >> falt2[a];
    }
    
    cout << endl;
    
    
    for(int a = 0; a < 10; a++)
    {
      cout << falt1[a] << " - " << falt2[a] << endl;
      
	if(falt1[a] > falt2[a])
	{
	  falt3[a] = falt1[a];
	}
	else if(falt1[a] <= falt2[a])
	{
	  falt3[a] = falt2[a];
	}
	
    }
    
    cout << endl;
    
    for(int a = 0; a < 10; a++)
    {
      cout << falt3[a] << "   ";
    }
    
  
   return 0;							
}
