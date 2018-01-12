
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    int falt[10];
    int n = 0;
    
    
    
    while(n < 10)
    {
      cout << "Tal " << n+1 << ": ";
      cin >> falt[n];
      n++;
    }
    
    cout << endl;
    
    n = 0;
    
    while(n < 10)
    {
      if (falt[n] > 0)
      {
	falt[n] *= -1;
      }
      n++;
    }
    
    n = 0;
    while(n < 10)
    {
      cout << falt[n] << ' ';
      n++;
    }
    
    cout << endl;
      
    
   return 0;							
}
