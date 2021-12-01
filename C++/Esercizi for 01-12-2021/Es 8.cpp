/*Dati N numeri effettuarne la somma.*/
#include <iostream>
using namespace std;
int main() {
	double n;
	cout << "Inserisci il numero di numeri da sommare: ";
	int n1 = 0;
	int volte;
	cin >> volte;
	cout << "Inserisci i numeri \n";
	for (int i = 1; i <= volte; i++) {
		cin >> n;
		n1 = n1 + n;
	}
	cout << "La somma è " << n1;
	return 0;
}