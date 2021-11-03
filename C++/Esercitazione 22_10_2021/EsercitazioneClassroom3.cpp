#include <iostream>
using namespace std;
int main() {
	int n, nn, pari, dispari;
	pari = 0;
	dispari = 0;
	nn = 0;
	cout << "Dammi 10 numeri e ti dirò quanti di questi sono pari\n\n";
	while (nn < 10) {
		cin >> n;
		if (n % 2 == 0) {
			pari = pari + 1;
		}
		else {
			dispari = dispari + 1;
		}
		nn = nn + 1;
	}
	cout << " Hai " << pari << " numeri pari e " << dispari << " numeri dispari";
}