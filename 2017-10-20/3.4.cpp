// Ett första exempel
#include <iostream>
#include <string>
using namespace std;						

int main ()							
{

  cout << "Skriv två ord: " << endl;
  string a;
  getline (cin, a);
  int mellanslag = a.find(' ', 0);
  string ford = a.substr(0, mellanslag);
  string aord = a.substr(mellanslag+1, 20);
  cout << "Det första ordets längd: " << ford.length() << ". " << "Det andra ordets längd: " << aord.length() << endl;
  
  
  return 0;							
}
