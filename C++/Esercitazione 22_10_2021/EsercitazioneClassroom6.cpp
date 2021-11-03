#include <iostream>
using namespace std;
int main() {
	string scelta;
	cout << "Dimmi il giorno è ti dirò l'orario di quel giorno\n\n";
	cin >> scelta;
	cout << "\n\n";
	if (scelta == "Lunedi") {
		cout << "1^Ora: Matematica\n2^Ora: Matematica\n3^Ora: Sistemi e Reti\n4^Ora: Scienze Motorie\n5^Ora: Inglese\n";
	}
	else if (scelta == "Martedi") {
		cout << "1^Ora: Religione\n2^Ora: Italiano\n3^Ora: Italiano\n4^Ora: Inglese\n5^Ora: Sistemi e Reti\n6^Ora: Informatica\n7^Ora: Tecnologie e Progettazione\n";
	}
	else if (scelta == "Mercoledi") {
		cout << "1^Ora: Telecomunicazioni\n2^Ora: Telecomunicazioni\n3^Ora: Inglese\n4^Ora: Informatica\n5^Ora: Informatica\n6^Ora: Italiano\n7^Ora: Tecnologie e Progettazione\n";
	}
	else if (scelta == "Giovedi") {
		cout << "1^Ora: Tecnologie e Progettazione\n2^Ora: Informatica\n3^Ora: Sistemi e Reti\n4^Ora: Sistemi e Reti\n5^Ora: Matematica\n6^Ora: Tecnologie e Progettazione\n7^Ora: Italiano\n";
	}
	else if (scelta == "Venerdi") {
		cout << "1^Ora: Scienze Motorie\n2^Ora: Matematica\n3^Ora: Informatica\n4^Ora: Informatica\n5^Ora: Italiano\n";
	}
	else if (scelta == "Sabato" or scelta == "Domenica") {
		cout << "Riposo\n";
	}
	return 0;
}