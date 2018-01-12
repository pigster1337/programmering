
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    int val;
    bool fortsatt = true;
    double insattning, uttag;
    double behallning = 1000;
    
    do
    {
      cout << endl << "1. Insättning " << endl << "2. Uttag " << endl << "3. Visa Behållning" << endl << "4. Avsluta programmet" << endl;
      cin >> val;
      
	
      
      switch(val)
	{
	  case 1:
	    cout << "Hur mycket vill du sätta in? Du har redan " << behallning << " kr på kontot" << endl;
	    cin >> insattning;
	    behallning += insattning;
	    cout << "Nu har du " << behallning << " kr på kontot" << endl;
	    break;
	  case 2:
	    cout << "Hur mycket vill du ta ut? Du har redan " << behallning << " kr på kontot" << endl;
	    cin >> uttag;
	    behallning -= uttag;
	    cout << endl << "Nu har du " << behallning << " kr på kontot" << endl;
	    break;
	  case 3:
	    cout << "Du har " << behallning << " kr på kontot" << endl;
	    break;
	  case 4:
	    fortsatt = false;
	    break;
	}
    }
    while(fortsatt);
      
    
   return 0;							
}