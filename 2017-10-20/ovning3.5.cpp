// Ett f�rsta exempel
#include <iostream>
#include <string>
using namespace std;						

int main ()							
{

  cout << "Skriv in ett klockslag i digital form (ab:cd): " << endl;
  string klockslag;
  getline (cin, klockslag);
  int semik = klockslag.find(':', 0);
  string timme = klockslag.substr(0, semik);
  string minut = klockslag.substr(semik+1, 4);
  cout << "Timmen �r: " << timme << " och minuten �r: " << minut << endl;
  
  
  return 0;							
}
