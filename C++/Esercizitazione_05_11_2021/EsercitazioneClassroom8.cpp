#include <iostream>
using namespace std;
int main() {
	double n;
	cout << "Inserisci il numero di numeri da sommare: ";
	int i = 1;
	double n1 = 0;
	int volte;
	cin >> volte;
	cout << "Inserisci i numeri \n";
	while (i <= volte) {
		cin >> n;
		n1 = n1 + n;
		i++;
	}
	cout << "La somma è " << n1;
	return 0;
}