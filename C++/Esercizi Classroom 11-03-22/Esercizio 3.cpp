/*Scrivere un programma che riceve in input un numero intero  e stampa “pari” se  ∈ {0,2,4}, “dispari” se  ∈ {1,3,5}, altrimenti “altro”.*/

#include <iostream>
using namespace std;


int main() {

	int numero;

	cout << "Inserisci un numero" << endl;
	cin >> numero;

	switch (numero) {
	case 0:
	case 2:
	case 4:
		cout << "Pari";
		break;
	case 1: 
	case 3:
	case 5:
		cout << "Dispari";
		break;

	default:
		cout << "Altro";
	}

	return 0;

}

