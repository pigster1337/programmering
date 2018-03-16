
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						


    
    double Volymberakning(double radie, double hojd);
    double Areaberakning(double radie);
    const double pi = 3.14159;
    
    int main()
    {
      double radie, hojd;
      cout << "Mata in radien på din cylinder: ";
      cin >> radie;
      cout << "Mata in höjden på din cylinder: ";
      cin >> hojd;
      
      double volym = Volymberakning(radie, hojd);
      double area = Areaberakning(radie);
      cout << "Radien " << radie << " och höjden " << hojd << " ger volymen " << volym << " och arean " << area << endl;
      
      return 0;
    }
    
    double Volymberakning(double radie, double hojd)
    {
      
      double volym = (radie*radie*hojd*pi);
      return volym;
    }
    
    double Areaberakning(double radie)
    {
      double area = radie*radie*pi;
      return area;
    }
