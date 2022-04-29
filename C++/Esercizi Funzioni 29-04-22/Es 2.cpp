/*2) Calcola l'elevamento a potenza utilizzando le funzioni.*/
#include <iostream>
using namespace std;

int elevamento(int base, int esponente)
{
	int risultato = 1;
	for (int i = 0; i < esponente; i++)
	{
		risultato *= base;
	}
	return risultato;
}

int main() {
	
	int base, esponente;
	cout << "Inserisci la base: ";
	cin >> base;
	cout << "Inserisci l'esponente: ";
	cin >> esponente;
	cout << "Il risultato dell'elevamento a potenza e': " << elevamento(base, esponente) << endl;
	
	return 0;
}	