#include <iostream>
using namespace std;
int main() {
	double n;
	cout << "Dammi un numero\n";
	cin >> n;
	int i = 1;
	while (i < 12) {
		double multipli = n * i;
		cout << multipli;
		i++;
	}
	return 0;
}