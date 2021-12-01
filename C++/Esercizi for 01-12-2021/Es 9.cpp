/* Dati N numeri contare quanti sono i valori pari e quelli dispari. */
#include <iostream>
using namespace std;
int main() {
	int N;
	cout << "inserisci la quantità dei tuoi numeri\n";
	cin >> N;
	int volte = N;
	int pari = 0;
	int dispari = 0;
	for (int i = 1; i <= volte; i++){
		cout << "Inserisi numero " << i << endl;
		cin >> N;
		if (N % 2 == 0) {
			pari++;
		}
		else {
			dispari++;
		}
	}
	cout << "Hai " << pari << " numeri pari e " << dispari << " numeri dispari";
	return 0;
}