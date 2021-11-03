#include <iostream>
using namespace std;

int main() {
	//Dichiarazione delle variabiloi
	int soldi, prezzo, resto;
	cout << "Dimmi il prezzo dell'oggetto" << endl;
	cin >> prezzo;
	cout << "Ora dimmi quanti soldi hai a disposizione"<<endl;
	cin >> soldi;
	//Ora risolviamo il problema
	if (prezzo <= soldi) {
			resto = soldi - prezzo;
			cout << "Puoi acquistare l'oggetto che tanto desideri, in più ti rimangono " << resto << endl;
		}
	else {
		cout << "Non puoi acquistare l'oggetto da te desiderato" << endl;
	}
	return 0;
}