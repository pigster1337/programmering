
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						


    
    double Areaberakning(double radie);
    
    int main()
    {
      double radie;
      cout << "Mata in radien på din cylinder: ";
      cin >> radie;
      
      double area = Areaberakning(radie);
      cout << radie << " ger arean " << area << endl;
      
      return 0;
    }
    
    double Areaberakning(double rad)
    {
      
      double area = (rad*rad*3.14);
      return area;
    }
