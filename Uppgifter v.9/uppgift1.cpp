
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						

int main ()							
{

    
    int a;
    int summa = 0;
    char b;
    
    do
    {
      cout << "Mata in ett tal: ";
      cin >> a;
      summa = a + summa;
      cout << "Du matade in talet " << a << ". \nSumman är: " << summa << ". \nVill du fortsätta? (j/n) ";
      cin >> b;
      cout << endl;
    }
   
    while (b == 'j');
    
    if(b == 'n')
    {
      cout << "Tack för att du använt programmet!" << endl;
    }
    else
    {
      cout << "Felinmatning" << endl;
    }
  
   return 0;							
}
