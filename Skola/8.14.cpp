#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL,"swedish");
	
	int anstallda = 0;
	float totallon = 0;
	int val;
	float lon[50];
	int anstalldaandring;
	bool fortsatt = true;
	
	do{
		cout << endl << "1. Visa anställda och medellön" << endl << "2. Mata in nya uppgifter" << endl << "3. Avsluta" << endl;
		cin >> val;
		
		switch (val)
		{
				case 1:
					cout << endl << "Företaget har " << anstallda << " personer anställda och medellönen är " << totallon/anstallda << "kr" << endl;
					break;
				case 2:
					cout << "Mata in hur antalet anställda har förändrats (ex. 5 eller -4): ";
					cin >> anstalldaandring;
					anstallda = anstallda + anstalldaandring;
					
						for(int a = 0; a < anstalldaandring; a++)
							{
								cout << "Mata in vad den " << a+1 << " har för lön: ";
								cin >> lon[a];
								totallon = totallon + lon[a];
							}	
							cout << endl;
					cout << "Nu har företaget " << anstallda << " personer anställda och medellönen är " << totallon/anstallda << "kr" << endl;
					break;
				case 3:
					cout << "Tack för att du använt programmet!" << endl;
					fortsatt = false;
					break;
					
				default:
					cout << "Felinmatning. Du tas till startsidan." << endl;
					break;
					
			
		}
		
	}
	while(fortsatt == true);

	
	
	return 0;
}
