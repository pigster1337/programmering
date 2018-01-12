// Ett första exempel
#include <iostream>
#include <string>
using namespace std;						

int main ()							
{

  cout << "Skriv en text" << endl;
  string text;
  getline(cin, text);
  cout << "Antal tecken i texten: " << text.length() << endl;
  
  
  return 0;							
}
