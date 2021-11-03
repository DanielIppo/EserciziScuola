#include <iostream>
using namespace std;

int main() {
	int prezzo, peso, totale;
	cout << "Dimmi il prezzo in kg" << endl;
	cin >> prezzo;
	cout << "Dimmi il peso" << endl;
	cin >> peso;
	totale = prezzo * peso;
	cout << "Devi pagare " << totale << " euro";
	return 0;
}