// Ett f�rsta exempel
#include <iostream>
#include <string>
using namespace std;						

int main ()							
{

  cout << "Skriv tv� ord: " << endl;
  string a;
  getline (cin, a);
  int mellanslag = a.find(' ', 0);
  string ford = a.substr(0, mellanslag);
  string aord = a.substr(mellanslag+1, 20);
  cout << "Det f�rsta ordets l�ngd: " << ford.length() << ". " << "Det andra ordets l�ngd: " << aord.length() << endl;
  
  
  return 0;							
}
