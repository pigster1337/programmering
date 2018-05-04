
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

void meny();
void addition();
void subtraktion();
void division();
void multiplikation();

int main ()							
{

    
    meny();
    return 0;
}

void meny()
{
  
  char val;
  
 cout << "Välj: " << endl;
  cout << endl << "Plus (p)" << endl; 
  cout << "Minus (m)" << endl; 
  cout << "Multiplikation (*)" << endl; 
  cout << "Division (/)" << endl; 
  cout << "Avsluta (a)" << endl; 
  cout << "> ";
  cin >> val;
  
  switch(val)
  {
    case 'a':
      cout << "Tack för att du använt programmet. Välkommen åter!" << endl;
      return;
      break;
    case 'p':
      addition();
      break;
    case 'm':
      subtraktion();
      break;
    case '*':
      multiplikation();
      break;
    case '/':
      division();
      break;
    default:
      cout << "Felinmatning" << endl;
      return;
    
  }
  
}

void addition()
{
  cout << "Vilka tal vill du addera?" << endl << "> ";
  double a, b;
  cin >> a >> b;
  double summa = a + b;
  cout << "Summan blir = " << summa << endl;
}

void subtraktion()
{
  cout << "Vilka tal vill du subtrahera?" << endl << "> ";
  double a, b;
  cin >> a >> b;
  double differens = a - b;
  cout << "Differensen blir = " << differens << endl;
}

void multiplikation()
{
  cout << "Vilka tal vill du multiplicera?" << endl << "> ";
  double a, b;
  cin >> a >> b;
  double summa = a * b;
  cout << "Summan blir = " << summa << endl;
}

void division()
{
  cout << "Vilka tal vill du dividera?" << endl << "> ";
  double a, b;
  cin >> a >> b;
  double kvot = a / b;
  cout << "Kvoten blir = " << kvot << endl;
}
