#include <iostream>

using namespace std;
int main()
{
	
	int insattning, uttag, val;
	int total = 1000;
	bool fortsatt = true;
	
	
	do
	{
		cout << endl << "1. Visa kapital" << endl << "2. Ins�ttning" << endl << "3. Uttagning" << endl << "4. Avsluta" << endl;
		cin >> val;
		
		switch(val)
		{
		
			case 1:
			cout << "Du har " << total << "kr p� kontot." << endl;
			break;
			
			case 2:
			cout << "Hur mycket vill du s�tta in? Du har f�r tillf�llet " << total << "kr. ";
			cin >> insattning;
			total = total + insattning;
			cout << "Nu har du " << total << "kr p� kontot." << endl;
			break;
			
			case 3:
			cout << "Hur mycket vill du ta ut? Du kan ta ut max " << total << "kr. ";
			cin >> uttag;
			if(uttag > total)
			{
				cout << "Du kan ej ta ut mer �n vad du har. Du tas nu tillbaka tillbaka till startsidan" << endl;
				
			}
			else
			{
				total = total - uttag;
				cout << "Du har nu " << total << "kr p� kontot" << endl;
			}
			break;
			
			case 4:
			cout << "Tack f�r att du anv�nt programmet!" << endl;
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
