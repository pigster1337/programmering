// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{


    /*if ( (1<=1) && (1==1) ) 							//M ste entydigt kunna utv rderas true/false
    {
      cout << "Sann sats 1" << endl;
      cout << "Sann sats 2" << endl;
      cout << "piggys mamma  lskar sedvins kuk" << endl;
    }
    
    else
    {
     
      cout << "Falsk sats 1" << endl;
      cout << "Falsk sats 2" << endl;
      
    }*/
    
   /* if ( !(1>2) )
    {
      cout << "SANT" << endl;

      
    }*/
   
  /* if(1==1)
   {
     cout << "1" << endl;
   }
   
   else if (2==3)
   {
     cout << "2" << endl;
   }
   
   else 
   {
     cout << "3" << endl;
   }*/
  
  if (2==1)
  {
    cout << "1" << endl;
  }
  
  else
  {
    if (2==3)
      cout << "2" << endl;
    else
      cout << "ä" << endl;
  }

   return 0;							// H r avslutas programmet
}
