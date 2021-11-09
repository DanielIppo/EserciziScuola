#include <iostream>
using namespace std;
int main() {
	double n;
	cout << "Dammi un numero\n";
	int i = 1;
	double n1 = 0;
	while (i <= 10) {
		cin >> n;
		n1 = n1 + n;
		i++;
	}
	cout << "La somma è " << n1;
	return 0;
}