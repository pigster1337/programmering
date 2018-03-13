
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    int antal;
    int falt[200];										// Max 200 platser i fältet, endast heltal.
    

    cout << endl << "Mata in heltal, 48-57, 65-90 och 97-122 är tillåtna." << endl;
	
    do{
	cout << "Hur många tal vill du mata in? ";
	cin >> antal;
      
	  if(antal < 2 || antal > 200)
	  {
	    cout << endl << "Du får bara mata in mellan 2 och 200 tal" << endl;
	    
	  }											// Denna do-while satsen körs tills minst en gång, sedan tills 'antal' är mellan 2 och 200.
       }
       while(antal < 2 || antal > 200);                                                 
    
    
    for(int a = 0; a < antal;)
    {
	cout << endl << "Mata in tal " << a+1 << ": ";
	cin >> falt[a];
      
	  if( falt[a] >= 48 && falt[a] <= 57 || falt[a] >= 65 && falt[a] <= 90 || falt[a] >= 97 && falt[a] <= 122)	// Om det inmatade talet är inom de godkända kriterierna ökar 
	  {														// a med 1 och satsen fortsätter med nästa inmatning, medan om det inte är godkänt  
	    a++;													// fortsätter man på samma värde. Man skulle även kunna sätta "a++" i 
	  }														// for-satsen som if-satsen ligger inuti och därmed lägga ett a-- i else-satsen.
															// Det hade blivit samma resultat men jag tycker mitt sätt
	  else														// ser snyggare ut.
	  {													
	    cout << "Felaktigt värde." << endl;
	    
	  }
	  
    }
    
    cout << endl << "Dina tals motsvarande Unicode-tecken är: ";
    
    for (int a = 0; a < antal; a++)
    {
      cout << (char)falt[a] << "  ";							// Skriver ut varje inmatat tals motsvarande char-värde, allstå unicode-tecknet.
    }
    
    cout << endl;
    
  
   return 0;	

}
 
