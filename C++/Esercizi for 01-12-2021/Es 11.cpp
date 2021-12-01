/* Dati N numeri contare quanti sono i multipli di A. */
#include <iostream>
using namespace std;

int main() {
	int n, a;
	int multipli = 0;
	cout << "Quali multipli del seguente numero che inserirai vorresti sapere?\n";
	cin >> a;
	cout << "Inserisci i numeri\n";
	for(int i = 1; i < 10; i++) {
		cin >> n;
		if (n % a == 0) {
			multipli = multipli + 1;
		}
	}
	cout << "Hai " << multipli << " multipli di " << a ;
	return 0;
}