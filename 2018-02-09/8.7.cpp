
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{
  
  
    int val = 0;
    int passagerare = 0;
    
    while (val < 5){
    cout << endl << "Meny" << endl << endl << "1. Nollställ antalet passagerare" << endl << "2. Öka antalet passagerare med en" << endl << "3. Minska antalet passagerare med en" << endl << "4. Skriv ut antalet passagerare" << endl << "5. Avsluta" << endl << endl;
 
    
    cin >> val;
    
    switch(val)
    {
    case 1:
      passagerare = 0;
      break;
    case 2:
      passagerare++;
      break;
    case 3:
      passagerare--;
      break;
    case 4:
      cout << "Det är: " << passagerare << " passagerare på båten." << endl;
      break;
    default:
      return 0;
      
    }
      
    }
 
    
    
  
   return 0;							
}