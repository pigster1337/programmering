// Ett första exempel
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
  cout << "Timmen är: " << timme << " och minuten är: " << minut << endl;
  
  
  return 0;							
}
