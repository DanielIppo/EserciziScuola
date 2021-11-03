#include <iostream>
using namespace std;

int main() {
	double temperatura;
	cout << "Dimmi la temperatura" << endl;
	cin >> temperatura;
	if (temperatura == 0) {
		cout << "La tua temperatura è uguale a zero";
		}
	else if(temperatura <0){
		cout << "La tua temperatura è sotto zero";
		}
	else {
		cout << "La tua temperatura è maggiore a zero";
	}
	return 0;
}