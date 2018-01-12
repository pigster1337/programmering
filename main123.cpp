
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    char namn[20];
    cout << "Skriv ditt namn: " << endl;
    cin >> namn;
    cout << "Ditt namn är: " << namn << endl;
    
    string s;
    string s2;
    s = "Marks";
    s2= " Gymnasieskola";
    s = s+s2;
    cout << s << endl;
    
    s.at(0) = 'P';
    cout << s << endl;
    
    int antal = s.size();
    cout << antal << endl;
    
    int hitta = s.find('a',0);
    cout << hitta << endl;
    hitta = s.find("Gym",0);
    cout << hitta << endl;
    
    string delstring = s.substr(hitta,8);
    cout << delstring << endl;
    
    string helnamn;
    cout << "Mata in ditt för och efternamn: " << endl;
    //cin >> helnamn;
    cin.ignore(1000,'\n');
    getline(cin,helnamn);
    cout << "Ditt hela namn är: " << helnamn << endl;
    
   return 0;							
}
