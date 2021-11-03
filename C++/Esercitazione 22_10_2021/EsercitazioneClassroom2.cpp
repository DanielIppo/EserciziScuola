#include <iostream>
using namespace std;
int main() {
	int n, n1, n2, n3, n4, n5, n6, n7, n8, n9, pari, dispari;
	cout << "Dammi 10 numeri e ti dirò quanti di questi sono pari\n\n";
	cin >> n;
	if (n % 2 == 0) {
		pari = 1;
	}
	else {
		dispari = 1;
	}
	cin >> n1;
	if (n1 % 2 == 0) {
		if (pari == 1) {
			pari = 2;
		}
		else {
			pari = 1;
		}
	}
	else if (dispari == 1) {
		dispari = 2;
		}
			else {
		dispari = 1;
			}

}