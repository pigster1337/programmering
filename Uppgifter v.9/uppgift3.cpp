
#include <iostream>						
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;						

int main ()							
{

    
    for(int a = 0; a < 10; a++)
    {
      for(int b = 0; b < 10; b++)
      {
	for(int c = 0; c < 10; c++)
	{
	  if(pow(a, 3) + pow(b, 3) + pow(c, 3) == a*100 + b*10 + c)
	  {
	    cout << pow(a, 3) + pow(b, 3) + pow(c, 3) << " = " << a << "^3 + " <<  b << "^3 + " <<  c << "^3" << endl;
	  }
	}
      }
      
    }
    
  
   return 0;							
}
