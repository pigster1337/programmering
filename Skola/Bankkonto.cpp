#include <iostream>

using namespace std;
int main()
{
	
	int insattning, uttag, val;
	int total = 1000;
	bool fortsatt = true;
	
	
	do
	{
		cout << endl << "1. Visa kapital" << endl << "2. Insättning" << endl << "3. Uttagning" << endl << "4. Avsluta" << endl;
		cin >> val;
		
		switch(val)
		{
		
			case 1:
			cout << "Du har " << total << "kr på kontot." << endl;
			break;
			
			case 2:
			cout << "Hur mycket vill du sätta in? Du har för tillfället " << total << "kr. ";
			cin >> insattning;
			total = total + insattning;
			cout << "Nu har du " << total << "kr på kontot." << endl;
			break;
			
			case 3:
			cout << "Hur mycket vill du ta ut? Du kan ta ut max " << total << "kr. ";
			cin >> uttag;
			if(uttag > total)
			{
				cout << "Du kan ej ta ut mer än vad du har. Du tas nu tillbaka tillbaka till startsidan" << endl;
				
			}
			else
			{
				total = total - uttag;
				cout << "Du har nu " << total << "kr på kontot" << endl;
			}
			break;
			
			case 4:
			cout << "Tack för att du använt programmet!" << endl;
			return 0;
			break;
			
			default:
			cout << "Felinmatning. Du tas tillbaka till startsidan" << endl;
			break;
		}
		
	}
	while (fortsatt == true);
	
	return 0;
}
