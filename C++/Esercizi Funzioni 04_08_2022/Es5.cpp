/*5) Definite 3 variabili sulla funzione main, ordinarle in ordine crescente tramite una funzione esterna.*/
#include <iostream>
using namespace std;

void order(int a, int b, int c) {
	int temp;
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c) {
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	cout << a << " " << b << " " << c << endl;
}

int main() {
	int a, b, c;
	cout << "Inserisci 3 numeri interi: ";
	cin >> a >> b >> c;
	
	order(a, b, c);
}