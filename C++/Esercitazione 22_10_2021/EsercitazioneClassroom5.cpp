#include <iostream>
using namespace std;
int main() {
	cout << "Dammi un numero e ti calcolerò il fattoriale\n\n";
	int n;
	cin >> n;
	int fattoriale=1;
	for (int x = n; x > 0; x--) {
        fattoriale= x * fattoriale;
	}
	cout << fattoriale;
	return 0;
}