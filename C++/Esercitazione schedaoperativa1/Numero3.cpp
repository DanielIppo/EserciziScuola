#include <iostream>
using namespace std;

int main() {
	int altezza, base, area;
	cout << "Dammi l'altezza e la base di un rettangolo" << endl;
	cin >> altezza;
	cin >> base;
	area = altezza * base;
	cout << "La tua are è " << area;
	return 0;
}