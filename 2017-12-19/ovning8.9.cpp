
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    cout << endl << "MINIRÄKNARE" << endl << endl;
    
    char fortsatt;
    
    float tal1, tal2;
    char raknesatt;
    
    do
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
      
      cout << "Fortsätta? (j/n)" << endl;
      cin >> fortsatt;
    }
    while(fortsatt == 'j');
    
    cout << "Hejdå" << endl;
      
    
   return 0;							
}
