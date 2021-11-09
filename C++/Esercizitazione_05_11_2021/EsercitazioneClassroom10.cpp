#include <iostream>
using namespace std;
int main() {
	int n;
	int x = 1;
	int multipli = 0;
	cin >> n;
	while (x < 10) {
		cin >> n;
		if (n % 3 == 0) {
			multipli = multipli + 1;
			x++;
		}
	}
	cout << multipli;
	return 0;
}