
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    while (val < 5){
    cout << "Meny" << endl << "1. Nollställ antalet passagerare" << endl << "2. Öka antalet passagerare med en" << endl << "3. Minska antalet passagerare med en" << endl << "4. Skriv ut antalet passagerare" << endl << "5. Avsluta" << endl;
    int val;
    int passagerare = 0;
    cin >> val;
    
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
      cout << passagerare << endl;
      break;
      
    }
 
    
    
  
   return 0;							
}