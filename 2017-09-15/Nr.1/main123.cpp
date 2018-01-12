// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
{

    /*
     * datatyp variabelnamn;
     */
    
    int tal1;							//Plats för en int allokeras (bokas)
    int tal2;
    //antal = 4;						//Antal tilldelas värdet 4
    
    cout << "Mata in ett heltal 1: ";
    cin >> tal1;
    cout << "Mata in ett heltal 2: ";
    cin >> tal2;						//Inmatning från tangentbord
    int summa = tal1/tal2;					// int summa; 
								//summa = tal1+tal2;
    cout << "Kvoten av talen blir " << summa << endl;		//cout << "Kvoten av talen blir " << tal1+tal2 << endl;
    

  
  
  
    return 0;							// Här avslutas programmet
}

