#include <iostream>
using namespace std;

int main() {
	int N;
	int N1 = 0;
	int i = 1;
	cout << "Inserisci 10 numeri e ti faro' la somma sia positivi che negativi\n";
	while (i <= 10) {
		cout << "N." << i << ":";
		cin >> N;
		N1 = N1 + N;
		i++;
	}
	float media = N1 / 10;
	cout << "La tua media e' di " << media;
	return 0;
}