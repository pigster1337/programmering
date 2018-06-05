
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;	

char tecken(double tal);

int main ()							
{

    double tal;
    char tillbaka = tecken(tal);
    cout << tillbaka << endl;
    
    
  
   return 0;							
}


char tecken(double tal)
{
  
 cout << "Mata in ett tal: ";
 cin >> tal;
 if (tal < 0)
 {
   
   return '-';
 }
 
 else
 {
  
   return '+';
   
 }
  
}