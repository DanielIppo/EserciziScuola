/*6) Definite 3 variabili sulla funzione main, implementare una funzione che ne calcoli i valori assoluti tramite il passaggio di parametri per riferimento.*/
#include <iostream>
using namespace std;

void absolute(int& a, int& b, int& c){
	if (a < 0) a = -a;
		
	if (b < 0) b = -b;
		
	if (c < 0) c = -c;
		
	
}

int main() {
	int a, b, c;
	cout << "Inserisci 3 numeri interi e ti calcolerò i valori assoluti:\n ";
	cin >> a >> b >> c;
	absolute(a, b, c);
	
	cout << "Il valore assoluti dei tuoi numeri sono: \n1)" <<a <<"\n2)" << b <<"\n3)" << c << endl;
}