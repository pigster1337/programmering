
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    
    int falt[10];
    
    for(int a = 0; a < 10; a++)
    {
      cout << "Mata in ett tal: ";
      cin >> falt[a];
    }
    
    for (int a = 0; a < 10; a++)
    {
      if(falt[a] < 0)
      {
	cout << falt[a] << endl;
      }
      else
      {
	cout << falt[a] * -1 << endl;
      }
    }
  
   return 0;							
}
