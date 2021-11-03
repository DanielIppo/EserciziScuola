#include <iostream>
using namespace std;
int main() {
	int somma;
	int n = 1;
	while (n != 0)
	{
		cout << "Dopo il numero che spunta inserici un numero\n\n";
		somma = 1 + 6 + 10 + 90 + 2 + 9 + 3 + 5 + 8 + 11;
		cout << somma << "\n";
		cin >> n;
	}
	cout << "Bravo hai digitato 0\n";
	return 0;
}