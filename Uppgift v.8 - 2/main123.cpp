
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    
    for(int x = -50; x <= 50; x++)
    {
     
      for(int y = -20; y <=20; y++)
      {
	if(3*x == 1 + (7*y))
	{
	  cout << "X = " << x << " och Y är lika med = " << y << endl;
	}
      }
    }
    
  
   return 0;							
}
