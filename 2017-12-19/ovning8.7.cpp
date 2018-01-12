
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    int ar = 0;
    int invanare = 1000000;
    
    while (invanare < 2000000)
    {
      invanare *= 1.05;
      ar++;
    }
    
    cout << "Det tar " << ar << " år för befolkningen att öka från 1mil till 2mil" << endl;
      
    
   return 0;							
}
