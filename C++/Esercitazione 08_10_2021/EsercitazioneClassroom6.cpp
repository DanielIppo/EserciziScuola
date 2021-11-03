#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Dammi due numeri diversi tra loro" << endl;
	cin >> a;
	cin >> b;
	if (a > b) {
		c = b + (a + b);
		cout << c;
		}
	else if (a < b) {
		c = a + (a + b);
		cout << c;
		}
	else if (a == b) {
		cout << "Hai inserito due numeri uguali, riprova";
	}
	
	return 0;
}