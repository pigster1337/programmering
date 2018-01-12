
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    int falt[5];
    
    for(int a = 0; a < 5; a++)
    {
      cout << "Tal " << a+1 << ": ";
      cin >> falt[a];
    }
    
    cout << endl;
    int minst = falt[0];
    
    for(int a = 0; a < 5; a++)
    {
	if(minst >= falt[a])
	{
	  minst = falt[a];
	}

    }
    
    cout << "Det minsta talet är " << minst << endl;
    
    cout << endl;
    
    
   return 0;							
}
