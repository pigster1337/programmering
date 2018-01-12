
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    cout << endl << "MINIRÄKNARE" << endl << endl;
    cout << "Skriv j för att starta" << endl;
    
    char fortsatt;
    cin >> fortsatt;
    
    float tal1, tal2;
    char raknesatt;
    
    while(fortsatt == 'j')
    {
      cout << "Vad vill du beräkna? " << endl;
      cin >> tal1 >> raknesatt >> tal2;
      
	  switch (raknesatt)
	  {
	    case '+':
	      cout << tal1 + tal2 << endl;
	      break;
	    case '-':
	      cout << tal1 - tal2 << endl;
	      break;
	    case '*':
	      cout << tal1 * tal2 << endl;
	      break;
	    case '/':
	      cout << tal1 / tal2 << endl;
	      break;
	  }
      
      cout << "Fortsätta?" << endl;
      cin >> fortsatt;
    }
    
    cout << "Hejdå" << endl;
      
    
   return 0;							
}
