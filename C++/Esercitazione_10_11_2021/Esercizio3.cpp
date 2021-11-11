#include <iostream>
using namespace std;

int main() {
	int N;
	int relativi = 0;
	int i = 1;
	cout << "Inserisci 10 numeri e ti faro' la somma sia positivi che negativi\n";
	while (i <= 10) {
		cout << "N." << i << ":";
		cin >> N;
		relativi = relativi + N;
		i++;
	}
	cout << "La tua somma e' di " << relativi;
	return 0;
}