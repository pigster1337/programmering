// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{
    
  
  double insattning, uttag;
  double total = 1000;
  int tal;
  cout << "Meny" << endl << "1. Insättning" << endl << "2. Uttag" << endl << "3. Visa Behållning" << endl;
  cin >> tal;
  switch (tal)
  {
    case 1:
      cout << "Hur mycket vill du sätta in?" << endl;
      cin >> insattning;
      total += insattning;
      break;
    case 2:
      cout << "Hur mycket vill du ta ut?" << endl;
      cin >> uttag;
      if (uttag > total)
      {
	cout << "Du kan ej ta ut så mycket." << endl;
      }
      else
      {
	total-=uttag;
      }
      break;
    case 3:
      break;
      
    default:
      cout << "Felinmatning" << endl;
      break;
      
  }
  
  cout << "Du har nu " << total << "kr på kontot" << endl << endl;
  
    cout << "Meny" << endl << "1. Insättning" << endl << "2. Uttag" << endl << "3. Visa Behållning" << endl;
  cin >> tal;
  switch (tal)
  {
    case 1:
      cout << "Hur mycket vill du sätta in?" << endl;
      cin >> insattning;
      total += insattning;
      break;
    case 2:
      cout << "Hur mycket vill du ta ut?" << endl;
      cin >> uttag;
      if (uttag > total)
      {
	cout << "Du kan ej ta ut så mycket." << endl;
      }
      else
      {
	total-=uttag;
      }
      break;
    case 3:
      break;
      
    default:
      cout << "Felinmatning" << endl;
      break;
      
  }
  
  cout << "Du har nu " << total << "kr på kontot" << endl << endl;
  
    cout << "Meny" << endl << "1. Insättning" << endl << "2. Uttag" << endl << "3. Visa Behållning" << endl;
  cin >> tal;
  switch (tal)
  {
    case 1:
      cout << "Hur mycket vill du sätta in?" << endl;
      cin >> insattning;
      total += insattning;
      break;
    case 2:
      cout << "Hur mycket vill du ta ut?" << endl;
      cin >> uttag;
      if (uttag > total)
      {
	cout << "Du kan ej ta ut så mycket." << endl;
      }
      else
      {
	total-=uttag;
      }
      break;
    case 3:
      break;
      
    default:
      cout << "Felinmatning" << endl;
      break;
      
  }
  
  cout << "Du har nu " << total << "kr på kontot" << endl << endl;
      
  
   
    
   return 0;							// H r avslutas programmet
}
