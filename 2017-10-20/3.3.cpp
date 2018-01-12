// Ett första exempel
#include <iostream>
#include <string>
using namespace std;						

int main ()							
{

  cout << "Skriv ett ord: " << endl;
  string ord;
  getline(cin, ord);
  string bbokstav = ord.substr(0, 1);
  int langd = ord.length();
  cout << "Ordets längd: " << langd << ", och ordets begynnelsebokstav: " << bbokstav << '.' << endl;
  
  return 0;							
}
