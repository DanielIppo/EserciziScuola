#include <iostream>
using namespace std;
int main() {
	double n, nm;
	cout << "Dammi un numero\n";
	cin >> n;
	cout << "Ora dammi il numero di multipli che vuoi\n";
	cin >> nm;
	int i = 1;
	while (i < nm) {
		double multipli = n * i;
		cout << multipli;
		i++;
	}
	return 0;
}