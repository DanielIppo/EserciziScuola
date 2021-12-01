/* Dati N numeri contare quanti sono i multipli di 3. */
#include <iostream>
using namespace std;
int main() {
	int n;
	int multipli = 0;
	cout << "Dammi 10 numeri e ti calcolerò quanti sono i multipli di 3\n";
	cin >> n;
	for (int i = 1; i < 10; i++){
		cin >> n;
		if (n % 3 == 0) {
			multipli = multipli + 1;
		}
	}
	cout <<"Hai "<< multipli<< "multipli di 3";
	return 0;
}