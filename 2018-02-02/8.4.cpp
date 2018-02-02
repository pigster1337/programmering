
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    int falt[5];
    
    for(int i = 0; i <= 4; i++)
    {
      cout << "Mata in ett heltal: " << endl;
      cin >> falt[i];
    }
    
    cout << endl;
    
    
    for(int i = 4; i >= 0; i--)
    {
      cout << falt[i] << endl;
    }
  
   return 0;							
}
