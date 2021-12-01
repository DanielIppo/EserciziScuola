/* Calcolare la somma dei primi N numeri naturali. */
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Dammi 10 numeri\n";
	int n1 = 0;
	for(int i = 0; i <= 10; i++) {
		cin >> n;
		n1 = n1 + n;
	}
	cout << "La somma è " << n1;
	return 0;
}
