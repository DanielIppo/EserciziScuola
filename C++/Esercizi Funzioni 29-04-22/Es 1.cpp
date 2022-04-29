/*1) Implementare una funzione per determinare se un triangolo è equilatero, isoscele o scaleno.*/
#include <iostream>
using namespace std;

string leggi_triangolo(int a, int b, int c) {
	
	if (a == b && b == c)
		return "equilatero";
	else if (a == b || b == c || a == c)
		return "isoscele";
	else
		return "scaleno";
}


int main() {
	int a, b, c;
	cout << "Inserisci i lati del triangolo: ";
	cin >> a >> b >> c;
	cout << "Il triangolo è " << leggi_triangolo(a, b, c) << endl;
	return 0;
}