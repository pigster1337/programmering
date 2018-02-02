
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    cout << "Mata in antalet prickar, rader och kolumner: ";
    int p, r, k;
    cin >> p >> r >> k;
   
    
    for(int i = 0; i < r; i++)
    {
      
      

	
      for(int a = 0; a < (p/r); a++)
      {
	cout << "*";
	
	
      }
      
      
      cout << endl;
    }
    
    
  
   return 0;							
}