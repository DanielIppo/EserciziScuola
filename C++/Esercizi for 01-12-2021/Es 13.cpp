/*Determinare quanti numeri multipli di K sono compresi nell'intervallo [A..B] (estremi
compresi)*/
#include <iostream>
using namespace std;

int main() {
	int A, B, K;
	int multipli = 0;
	int numero_multipli = 0;
	cout << "Inserisci il numero e ti trover� i suoi multipli\n";
	cin >> K;
	cout << "Ma essi saranno compresi tra i due seguenti numeri\n"<<"n.1:";
	cin >> A;
	cout << "n.2:";
	cin >> B;
	for(int i = 0; multipli <= B; i++) {
		if (multipli >= A) {
			numero_multipli++;
		}
		multipli = K * i;
	}
	cout << "Tra " << A << " e " << B << " hai " << numero_multipli << " multipli di " << K;
	return 0;
}