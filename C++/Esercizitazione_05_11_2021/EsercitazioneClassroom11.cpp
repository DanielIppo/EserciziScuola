#include <iostream>
using namespace std;

int main() {
	int n, a;
	int x = 1;
	int multipli = 0;
	cout << "Quali multipli del seguente numero che inserirai vorresti sapere?\n";
	cin >> a;
	cout << "Inserisci i numeri\n";
	while (x < 10) {
		cin >> n;
		if (n % a == 0) {
			multipli = multipli + 1;
		}
		x++;
	}
	cout << "Hai " << multipli << " multipli di " << a ;
	return 0;
}