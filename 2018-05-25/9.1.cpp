
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;	


  
double omkretsCirkel(double radie);
const double PI = 3.14159;


int main ()							
{

    double radie;
    omkretsCirkel(radie);
    

  return 0;
  
}

double omkretsCirkel(double radie)
{
  
  cout << "Vad är radien på cirkeln? ";
  cin >> radie;
  
  double omkrets = PI * (radie*2);
  cout << "Omkretsen är " << omkrets << endl;
  
}