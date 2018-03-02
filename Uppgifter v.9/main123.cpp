
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    
    int falt[5];
    for(int a = 0; a < 5; a++)
    {
      
      cout << "Mata in ett heltal: ";
      cin >> falt[a];
      cout << endl;
    }
    
    int a = 0;
    
    while(a < 5)
    {
      
      cout << "Tal " << a+1 << " är: " << falt[a] << endl;
      a++;
    }
    
  
   return 0;							
}
