/*4) Scrivere una funzione che calcoli la somma dei primi n numeri interi positivi utilizzando la ricorsione*/
#include <iostream>
using namespace std;

int somme(unsigned int n) {
	if (n == 0) {
		return n;
	}
	return n + somme(n-1);
}

int main() {
	int numeri;
	cout << "Inserisci un numero? ";
	cin >> numeri;
	int sommaTot = somme(numeri);
	cout << sommaTot;

	return 0;
}