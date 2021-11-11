#include <iostream>
using namespace std;

int main() {
	int N;
	int pari = 0;
	int dispari = 0;
	int i = 1;
	cout << "Inserisci 10 numeri e ti faro' la somma di quelli pari e di quelli dispari\n";
	while (i <= 10) {
		cout << "N." << i << ":";
		cin >> N;
		if (N % 2 == 0) {
			pari = pari + N;
		}
		else {
			dispari = dispari + N;
		}
		i++;
	}
	cout << "La somma dei tuoi pari e' di " << pari << " mentre di quelli dispari e' di " << dispari;
	return 0;
}