// Ett f rsta exempel
#include <iostream>						/* Inkluderar "saker" som finns i biblioteket "iostream" bl.a. utskrift p  sk rmen*/
#include <iomanip>
#include <string>
using namespace std;						// I en namnrymd ing r olika biblioteket. Alla ing ende bibliotek har olika namn.

int main ()							// H r b rjar programmet k ra
{

    int man1 = 12;
    int man2 = 5;
    int kvinna1 = 3;
    int kvinna2 =8;
    
    cout << "1. Presentera Statistik" << endl;
    cout << "2. Mata in ny statistik" << endl;
    cout << "3. Mata in helt ny statistik" << endl;
    int svar;
    cin >> svar;
    
    if (svar == 1)
    {
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else if(svar ==2)
    {
      
      cout << endl << "Mata in ditt kön (m/k) och din lön: " << endl;
   char kon;
   float lon;
   cin >> kon >> lon;
   
   if (kon == 'm' && lon > 20000)
   {
     man1++;
   }
   else if (kon == 'm' && lon < 20000)
   {
     man2++;
   }
   else if (kon == 'k' && lon > 20000)
   {
     kvinna1++;
   }
   else if (kon == 'k' && lon < 20000)
   {
     kvinna2++;
   }
   else
   {
     cout << "Felinmatning" << endl;
     return 0;
   }
   
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
   
    }
    
    else if (svar == 3)
    {
      cout << "Mata in hur många män som tjänar över 20000kr: ";
      cin >> man1;
      cout << "Mata in hur många män som tjänar under 20000kr: ";
      cin >> man2;
      cout << "Mata in hur många kvinnor som tjänar över 20000kr: ";
      cin >> kvinna1;
      cout << "Mata in hur många kvinnor som tjänar under 20000kr: ";
      cin >> kvinna2;
      
      cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else
    {
      cout << "Felinmatning" << endl;
      return 0;
    }
    
    cout << "1. Presentera Statistik" << endl;
    cout << "2. Mata in ny statistik" << endl;
    cout << "3. Mata in helt ny statistik" << endl;

    cin >> svar;
    
    if (svar == 1)
    {
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else if(svar ==2)
    {
      
      cout << endl << "Mata in ditt kön (m/k) och din lön: " << endl;
   char kon;
   float lon;
   cin >> kon >> lon;
   
   if (kon == 'm' && lon > 20000)
   {
     man1++;
   }
   else if (kon == 'm' && lon < 20000)
   {
     man2++;
   }
   else if (kon == 'k' && lon > 20000)
   {
     kvinna1++;
   }
   else if (kon == 'k' && lon < 20000)
   {
     kvinna2++;
   }
   else
   {
     cout << "Felinmatning" << endl;
     return 0;
   }
   
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
   
    }
    
    else if (svar == 3)
    {
      cout << "Mata in hur många män som tjänar över 20000kr: ";
      cin >> man1;
      cout << "Mata in hur många män som tjänar under 20000kr: ";
      cin >> man2;
      cout << "Mata in hur många kvinnor som tjänar över 20000kr: ";
      cin >> kvinna1;
      cout << "Mata in hur många kvinnor som tjänar under 20000kr: ";
      cin >> kvinna2;
      
      cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else
    {
      cout << "Felinmatning" << endl;
      return 0;
    }
    
    cout << "1. Presentera Statistik" << endl;
    cout << "2. Mata in ny statistik" << endl;
    cout << "3. Mata in helt ny statistik" << endl;

    cin >> svar;
    
    if (svar == 1)
    {
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else if(svar ==2)
    {
      
      cout << endl << "Mata in ditt kön (m/k) och din lön: " << endl;
   char kon;
   float lon;
   cin >> kon >> lon;
   
   if (kon == 'm' && lon > 20000)
   {
     man1++;
   }
   else if (kon == 'm' && lon < 20000)
   {
     man2++;
   }
   else if (kon == 'k' && lon > 20000)
   {
     kvinna1++;
   }
   else if (kon == 'k' && lon < 20000)
   {
     kvinna2++;
   }
   else
   {
     cout << "Felinmatning" << endl;
     return 0;
   }
   
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
   
    }
    
    else if (svar == 3)
    {
      cout << "Mata in hur många män som tjänar över 20000kr: ";
      cin >> man1;
      cout << "Mata in hur många män som tjänar under 20000kr: ";
      cin >> man2;
      cout << "Mata in hur många kvinnor som tjänar över 20000kr: ";
      cin >> kvinna1;
      cout << "Mata in hur många kvinnor som tjänar under 20000kr: ";
      cin >> kvinna2;
      
      cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else
    {
      cout << "Felinmatning" << endl;
      return 0;
    }
    
    cout << "1. Presentera Statistik" << endl;
    cout << "2. Mata in ny statistik" << endl;
    cout << "3. Mata in helt ny statistik" << endl;

    cin >> svar;
    
    if (svar == 1)
    {
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else if(svar ==2)
    {
      
      cout << endl << "Mata in ditt kön (m/k) och din lön: " << endl;
   char kon;
   float lon;
   cin >> kon >> lon;
   
   if (kon == 'm' && lon > 20000)
   {
     man1++;
   }
   else if (kon == 'm' && lon < 20000)
   {
     man2++;
   }
   else if (kon == 'k' && lon > 20000)
   {
     kvinna1++;
   }
   else if (kon == 'k' && lon < 20000)
   {
     kvinna2++;
   }
   else
   {
     cout << "Felinmatning" << endl;
     return 0;
   }
   
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
   
    }
    
    else if (svar == 3)
    {
      cout << "Mata in hur många män som tjänar över 20000kr: ";
      cin >> man1;
      cout << "Mata in hur många män som tjänar under 20000kr: ";
      cin >> man2;
      cout << "Mata in hur många kvinnor som tjänar över 20000kr: ";
      cin >> kvinna1;
      cout << "Mata in hur många kvinnor som tjänar under 20000kr: ";
      cin >> kvinna2;
      
      cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else
    {
      cout << "Felinmatning" << endl;
      return 0;
    }
    
    cout << "1. Presentera Statistik" << endl;
    cout << "2. Mata in ny statistik" << endl;
    cout << "3. Mata in helt ny statistik" << endl;

    cin >> svar;
    
    if (svar == 1)
    {
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else if(svar ==2)
    {
      
      cout << endl << "Mata in ditt kön (m/k) och din lön: " << endl;
   char kon;
   float lon;
   cin >> kon >> lon;
   
   if (kon == 'm' && lon > 20000)
   {
     man1++;
   }
   else if (kon == 'm' && lon < 20000)
   {
     man2++;
   }
   else if (kon == 'k' && lon > 20000)
   {
     kvinna1++;
   }
   else if (kon == 'k' && lon < 20000)
   {
     kvinna2++;
   }
   else
   {
     cout << "Felinmatning" << endl;
     return 0;
   }
   
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
   
    }
    
    else if (svar == 3)
    {
      cout << "Mata in hur många män som tjänar över 20000kr: ";
      cin >> man1;
      cout << "Mata in hur många män som tjänar under 20000kr: ";
      cin >> man2;
      cout << "Mata in hur många kvinnor som tjänar över 20000kr: ";
      cin >> kvinna1;
      cout << "Mata in hur många kvinnor som tjänar under 20000kr: ";
      cin >> kvinna2;
      
      cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else
    {
      cout << "Felinmatning" << endl;
      return 0;
    }
    
    cout << "1. Presentera Statistik" << endl;
    cout << "2. Mata in ny statistik" << endl;
    cout << "3. Mata in helt ny statistik" << endl;

    cin >> svar;
    
    if (svar == 1)
    {
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else if(svar ==2)
    {
      
      cout << endl << "Mata in ditt kön (m/k) och din lön: " << endl;
   char kon;
   float lon;
   cin >> kon >> lon;
   
   if (kon == 'm' && lon > 20000)
   {
     man1++;
   }
   else if (kon == 'm' && lon < 20000)
   {
     man2++;
   }
   else if (kon == 'k' && lon > 20000)
   {
     kvinna1++;
   }
   else if (kon == 'k' && lon < 20000)
   {
     kvinna2++;
   }
   else
   {
     cout << "Felinmatning" << endl;
     return 0;
   }
   
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
   
    }
    
    else if (svar == 3)
    {
      cout << "Mata in hur många män som tjänar över 20000kr: ";
      cin >> man1;
      cout << "Mata in hur många män som tjänar under 20000kr: ";
      cin >> man2;
      cout << "Mata in hur många kvinnor som tjänar över 20000kr: ";
      cin >> kvinna1;
      cout << "Mata in hur många kvinnor som tjänar under 20000kr: ";
      cin >> kvinna2;
      
      cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else
    {
      cout << "Felinmatning" << endl;
      return 0;
    }
    
    cout << "1. Presentera Statistik" << endl;
    cout << "2. Mata in ny statistik" << endl;
    cout << "3. Mata in helt ny statistik" << endl;

    cin >> svar;
    
    if (svar == 1)
    {
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else if(svar ==2)
    {
      
      cout << endl << "Mata in ditt kön (m/k) och din lön: " << endl;
   char kon;
   float lon;
   cin >> kon >> lon;
   
   if (kon == 'm' && lon > 20000)
   {
     man1++;
   }
   else if (kon == 'm' && lon < 20000)
   {
     man2++;
   }
   else if (kon == 'k' && lon > 20000)
   {
     kvinna1++;
   }
   else if (kon == 'k' && lon < 20000)
   {
     kvinna2++;
   }
   else
   {
     cout << "Felinmatning" << endl;
     return 0;
   }
   
   cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
   
    }
    
    else if (svar == 3)
    {
      cout << "Mata in hur många män som tjänar över 20000kr: ";
      cin >> man1;
      cout << "Mata in hur många män som tjänar under 20000kr: ";
      cin >> man2;
      cout << "Mata in hur många kvinnor som tjänar över 20000kr: ";
      cin >> kvinna1;
      cout << "Mata in hur många kvinnor som tjänar under 20000kr: ";
      cin >> kvinna2;
      
      cout << "                            Kön" << endl;
   cout << "Lön                     Man      Kvinna" << endl;
   cout << "Minst 20000 kr          "<< man1 << "         "<< kvinna1 << endl;
   cout << "Mindre än 20000 kr      "<< man2 << "          " << kvinna2 << endl;
    }
    
    else
    {
      cout << "Felinmatning" << endl;
      return 0;
    }
      
      
  
  
   return 0;	// H r avslutas programmet
}
