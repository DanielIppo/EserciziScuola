#include <iostream>
using namespace std;

int main() {
	double lordo, scontato, percentuale;
	cout << "Dammi il tuo importo lordo" << "\n";
	cin >> lordo;
	cout << "Ora dammi il tuo importo scontato"<<"\n";
	cin >> scontato;
	if (lordo > scontato) {
			percentuale = (scontato / lordo * 100);
			cout << "La tua percentuale scontata è di ";
			cout << percentuale;
			cout << "%";
		}
	else {
		percentuale = (lordo / scontato * 100);
		cout << "La tua percentuale scontata è di ";
		cout << percentuale;
		cout << "%";
	}
}