#include <iostream>
#include <cmath>
using namespace std;
int main() {
	string wait;
	string scelta;
	cout << "Dimmi che cosa vuoi fare tra somma di dieci numeri o potenza di un numero, inserendo o somma o potenza\n\n";
	cin >> scelta;
	cout << "\n\n";
	if (scelta == "somma") {
		int n;
		int controllo = 0;
		int nf = 0; //nf sta per numerofinale
		cout << "Dammi i 10 numeri che vuoi sommare\n\n";
		while (controllo < 10) {
			cin >> n;
			nf = nf + n;
			controllo = controllo + 1;
		}
		cout << "La tua somma è di " << nf;
	}
	else if (scelta == "potenza") {
		int n, p;
		cout << "Dammi rispettivamente il numero che vuoi portare alla potenza e l'esponente\n\n";
		cin >> n;
		cin >> p;
		cout << "La tua potenza è di " << pow(n,p);
	}
	cin >> wait;
	system("cls");
	main();
	return 0;
}