
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;	

bool siffra(char tecken);

int main ()							
{

  char tecken;
  cout << "Mata in ett tal eller tecken: ";
  cin >> tecken;
  
  bool tillbaka = siffra(tecken);
  
  if(tillbaka = true)
  {
   cout << "true" << endl; 
  }
  else{
    
   cout << "false" << endl; 
  }
  
  

							
}


bool siffra(char tecken)
{
  
 if((int)tecken == 9 || (int)tecken == 10 || ((int)tecken > 31 && (int)tecken < 48) || ((int)tecken > 57 && (int)tecken < 97) || ((int)tecken > 122 && (int)tecken < 181))
 {
  return false;
 }
 else
 {
  return true; 
 }
  
}


