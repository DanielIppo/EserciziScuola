/* Stampare i primi N multipli di un numero. */
#include <iostream>
using namespace std;
int main() {
	int n, nm;
	cout << "Dammi un numero\n";
	cin >> n;
	cout << "Ora dammi il numero di multipli che vuoi\n";
	cin >> nm;
	for(int i = 1 ; i <nm; i++) {
		int multipli = n * i;
		cout << multipli<<endl;
	}
	return 0;
}