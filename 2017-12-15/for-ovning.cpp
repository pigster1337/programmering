
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    int falt[10];
    
    
    
    for(int n = 0; n < 10; n++)
    {
      cout << "Tal " << n+1 << ": ";
      cin >> falt[n];
    }
    
    cout << endl;  
    
    
    for(int n = 0; n < 10; n++)
    {
      cout << falt[n] << ' ';
    }
    
    cout << endl;
    
    for(int n = 0;n < 10; n++)
    {
	if(n < falt[n])
	{
	  falt[n] *= -1;
	}
      
     cout << falt[n] << ' ';
    }
    
    cout << endl;
    
   return 0;							
}
