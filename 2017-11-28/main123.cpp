// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{
    double tal1, tal2;
    char raknesatt;
    cout << "Vad vill du beräkna?" << endl;
    cin >> tal1 >> raknesatt >> tal2;
    switch (raknesatt)
    {
      case '+':
	cout << tal1+tal2 << endl;
	break;
      case '-':
	cout << tal1-tal2 << endl;
	break;
      case '*':
	cout << tal1*tal2 << endl;
	break;
      case '/':
	cout << tal1/tal2 << endl;
	break;
    }
   
    
   return 0;							// H r avslutas programmet
}
