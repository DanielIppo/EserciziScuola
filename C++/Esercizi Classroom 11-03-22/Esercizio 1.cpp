/*In un albergo il prezzo della camera dipende dal piano in cui ci si trova secondo la seguente tabella.
piano 1 € 35
piano 2 € 45
piano 3 € 55
piano 4 € 65
Calcola il prezzo del conto sapendo il numero di giorni di soggiorno e il piano della camera.
*/

#include <iostream>
using namespace std;


int main() {

	int piano1 = 35;
	int piano2 = 45;
	int piano3 = 55;
	int piano4 = 65;
	int totale, giorni, piano;

	cout << "Quanti giorni vuoi pernottare?" << endl;
	cin >> giorni;

	cout << "Abbiamo i seguenti piani:";
	cout << "1) Primo Piano: 35€" << endl;
	cout << "2) Secondo Piano: 45€" << endl;
	cout << "3) Terzo Piano: 55€" << endl;
	cout << "4) Quarto Piano: 65€" << endl;


	cout << "A che piano desideri pernottare?" << endl;
	cin >> piano;

	switch (piano) {
	case 1:
		totale = giorni * piano1;
		cout << "Il totale da pagare è di : " << totale;
		break;
	case 2: 
		totale = giorni * piano2;
		cout << "Il totale da pagare è di : " << totale;
		break;
	case 3:
		totale = giorni * piano3;
		cout << "Il totale da pagare è di : " << totale;
		break;
	case 4:
		totale = giorni * piano4;
		cout << "Il totale da pagare è di : " << totale;
		break;

	default:
		cout << "L'opzione selezionata non è corretta";
	}

	return 0;

}

