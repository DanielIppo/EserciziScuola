#include <iostream>
using namespace std;

int main() {
	//Dichiarazione delle variabiloi
	int prezzo, peso, totale;
	//Riempiamo le variabili con un int per poter risolvere il problema
	cout << "Dimmi il prezzo per ogni kg di mele" << endl;
	cin >> prezzo;
	cout << "Ora dimmi quanti kg di mele vuoi acquistare " << endl;
	cin >> peso;
	//ora risolviamo il problema
	totale = prezzo * peso;
	cout << "Devi pagare " << totale << " euro" << endl;
	return 0;
}