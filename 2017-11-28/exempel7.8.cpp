// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{
    
  
    cout << "Skapa ett konto.\nAnvändarnamn: ";
    string anamn;
    getline(cin, anamn);
    
    cout << "Lösenord: ";
    string losen;
    getline(cin, losen);
    
    cout << endl << endl << endl;
    
    cout << "Logga in:\nAnvändarnamn: ";
    string forsok1;
    getline(cin, forsok1);
    
    cout << "Lösenord: ";
    string forsok2;
    getline(cin, forsok2);
    
    if(forsok1 == anamn && forsok2 == losen)
    {
      cout << "Välkommen " << anamn << " till måste github" << endl;
    }
    
    else 
    {
      cout << "Användarnamnet och lösenordet matchar inte, försök igen!" << endl;
    
    
    cout << endl << "Villdu försöka igen? j/n " << endl;
    char bokstav;
    cin >> bokstav;
      if (bokstav == 'j')
    {
    cout << "Logga in:\nAnvändarnamn: ";
    string forsok1;
    cin.ignore();
    getline(cin, forsok1);
    
    cout << "Lösenord: ";
    string forsok2;
    getline(cin, forsok2);
    }
    
    
    else
    {
      return 0;
    }
    
      if(forsok1 == anamn && forsok2 == losen)
    {
      cout << "Välkommen " << anamn << " till måste github" << endl;
    }
    
      else 
    {
      cout << "Användarnamnet och lösenordet matchar inte!" << endl;
    }
    }
    
   
    
   return 0;							// H r avslutas programmet
}
