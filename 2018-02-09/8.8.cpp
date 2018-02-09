
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{
  
  
  cout << "Mata in ett tal: ";
  int n;
  cin >> n;
  
  int a = 1;
  int b = 0;
  
  
  while(a <= n)
  {
    
    b = (b + a);
    
    
    a++;
  }
  
  cout << "1 + 2 + 3 + 4 + 5 +... + n = " << b << endl;
    
 
    
    
  
   return 0;							
}