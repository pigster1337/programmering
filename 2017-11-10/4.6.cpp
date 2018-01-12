// Ett första exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift på skärmen*/
#include <iomanip>
using namespace std;						// I en namnrymd ingår olika biblioteket. Alla ingående bibliotek har olika namn.

int main ()							// Här börjar programmet köra
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
  
    return 0;							// Här avslutas programmet
}
