
#include <iostream>						
#include <iomanip>
#include <string>
using namespace std;						


    
    void ritaTriangel(double hojd, char tecken);
    
    int main()
    {
	cout << "Mata in hur hög triangeln ska vara: ";
	double hojd;
	cin >> hojd;
	cout << "Mata in vilket tecken den ska byggas av: ";
	char tecken;
	cin >> tecken;
	
	ritaTriangel(hojd, tecken);
	return 0;
      
    }
    
    void ritaTriangel(double hojd, char tecken)
    {
      
      for (int i = 0; i < hojd; i++)
      {
	for (int j = 0; j < i; j++)
	{
	  cout << tecken;
	}
	cout << endl;
      }
      return;
    }
    
 
