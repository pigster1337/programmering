// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

    /*
     * datatyp variabelnamn;
     */
    
    int tal1;							//Plats f�r en int allokeras (bokas)
    int tal2;
    //antal = 4;						//Antal tilldelas v�rdet 4
    
    cout << "Mata in ett heltal 1: ";
    cin >> tal1;
    cout << "Mata in ett heltal 2: ";
    cin >> tal2;						//Inmatning fr�n tangentbord
    int summa = tal1/tal2;					// int summa; 
								//summa = tal1+tal2;
    cout << "Kvoten av talen blir " << summa << endl;		//cout << "Kvoten av talen blir " << tal1+tal2 << endl;
    

  
  
  
    return 0;							// H�r avslutas programmet
}

