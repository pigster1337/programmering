
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    for(int m = 1; m <= 10; m++)
    {
      for(int n = 1; n <= 10; n++)
      {
	cout << m*n << '\t';
      }
      cout << endl;
    }
    
   return 0;							
}
