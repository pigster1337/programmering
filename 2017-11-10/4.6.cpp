// Ett f�rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p� sk�rmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ing�r olika biblioteket. Alla ing�ende bibliotek har olika namn.

int main ()							// H�r b�rjar programmet k�ra
{

    double timmar;
    double minuter;
    double sekunder;
    cout << endl << "Ange antalet timmar: ";
    cin >> timmar;
    cout << endl << "Ange antalet minuter: ";
    cin >> minuter;
    cout << endl << "Ange antalet sekunder: ";
    cin >> sekunder;
    
    double ttimme = timmar+(minuter/60)+(sekunder/3600);
    double tminut = (timmar*60)+minuter+(sekunder/60);
    double tsekund = (timmar*3600)+(minuter*60)+sekunder;
    
    cout << endl << "Tidsomvanbdling ger: " << endl;
    cout << endl << ttimme<< " h = " << tminut << " min = " << tsekund << " sek" << endl << endl;
  
    return 0;							// H�r avslutas programmet
}
