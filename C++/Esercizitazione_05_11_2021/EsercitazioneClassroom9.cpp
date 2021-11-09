#include <iostream>
using namespace std;
int main() {
	int N;
	cout << "inserisci la quantità dei tuoi numeri\n";
	cin >> N;
	int i = 1;
	int volte = N;
	int pari = 0;
	int dispari = 0;
	while (i <= volte) {
		cout << "Inserisi numero " << i << endl;
		cin >> N;
		if (N % 2 == 0) {
			pari++;
		}
		else {
			dispari++;
		}
		i++;
	}
	cout << "Hai " << pari << " numeri pari e " << dispari << " numeri dispari";
	return 0;
}