/* Stampare multipli di A minori di N.*/
#include <iostream>
using namespace std;
int main() {
	int n, a;
	cout << "Scrivi du enumeri e ti daro' i multipli del secondo ma minori del primo\n";
	cin >> n;
	cin >> a;
	for (int i = 1;a * i < n && i > 0 ;i++) {
		int multiplo = a * i;
		cout << multiplo<<endl;
		
	}
	return 0;
}