#include <iostream>
using namespace std;

int main() {
	int giorni, sconto, totale, totale_scontato;
	cout << "Dimmi per quanti giorni vuoi nolegiare l'auto"<<endl;
	cin >> giorni;
	if (giorni >= 6) {
			totale = giorni * 30;
			sconto = (totale * 10) / 100;
			totale_scontato = totale - sconto;
			cout << "Devi pagare " << totale_scontato;
		}
	else {
			totale = giorni * 30;
			cout << "Devi pagare " << totale;
		}
	return 0;
}