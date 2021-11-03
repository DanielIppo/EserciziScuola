#include <iostream>
using namespace std;

int main() {
	int prezzo, soldi, resto;
	cout << "Dimmi il prezzo che vuoi tanto acquistare" << endl;
	cin >> prezzo;
	cout << "Ora dimmi i soldi a tuo disposizione" << endl;
	cin >> soldi;
	if (prezzo <= soldi) {
		resto = soldi - prezzo;
		cout << "Puoi acquistare l'oggetto e ti rimangono " << resto;
		}
	else
	{
		cout << "Non puoi acquistare l'oggetto";
	}
	return 0;
}