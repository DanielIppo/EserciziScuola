#include <iostream>
using namespace std;

int main() {
	double i, ii, iii;
	cout << "Dammi 3 numeri differenti e ti calcolerò il maggiore" << endl;
	cin >> i;
	cin >> ii;
	cin >> iii;
	if (i > ii) {
			if (i > iii) {
				cout << "il numero più grande è " << i;
			}
			else {
				cout << "il numero più grande è  " << iii;
			}
		}
	else if (ii > iii) {
		cout << "il numero più grande è " << ii;
	}
	else
	{
		cout << "il numero più grande è " << iii;
	}
	return 0;
}