
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    int a = -10;
    
    while(a < 10)            //satserna körs när a är mindre än 10. A börjar på -10, skriver ut och ökar sen med tre. Skriver ut var tredje tal från -10 till 10.
    {
      
      cout << a << ' ';
      a = a+3;
    }
    
    cout << endl;
    
  
   return 0;							
}
