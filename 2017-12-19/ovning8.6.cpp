
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    for(int a = 1; a <= 10; a++)
    {
      for(int b = 1; b <= a; b++)
      {
	cout << a*b << '\t';
      }
      cout << endl;
    }
      
    
   return 0;							
}
