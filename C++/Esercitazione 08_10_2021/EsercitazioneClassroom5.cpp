#include <iostream>
using namespace std;

int main() {
	int numero;
	cout << "Dimmi un numero e ti dirò se è divisore di 36" << endl;
	cin >> numero;
	if (36 % numero == 0) {
		cout << "Il tuonumero è divisore di 36";
		}
	else {
		cout << "Il tuo numero non è divisore di 36";
	}
	return 0;
}