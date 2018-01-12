
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    int falt[5];
    cout << "Mata in 5 värden i fältet." << endl;

    
    for (int n = 0; n < 5; n++)
    {
      cout << "Tal " << n+1 << ": ";
      cin >> falt[n];
    }
    
    int min = falt[0];
    for (int n = 0; n < 5; n++)
    {
      if ( min > falt[n]) min = falt[n];
    }
    
    cout << endl << "Minsta värdet: " << min << endl;
    
   return 0;							
}
