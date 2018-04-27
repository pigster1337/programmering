
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						


    
    void intid(double tid[], int& n);
    void uttid(double tid[], int n);
    double snabbtid(double tid[], int n);
    
    int main()
    {
      
     double tid[100];
     int antal;
     intid(tid, antal);
     uttid(tid, antal);
     return 0;
      
    }
    
    void intid(double tid[n], int& n)
    {
     cout << "Skriv in tiderna. Avsluta med 0" << endl;
     
    }