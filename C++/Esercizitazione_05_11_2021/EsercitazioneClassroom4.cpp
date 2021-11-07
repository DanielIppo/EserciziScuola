#include <iostream>
using namespace std;
int main() {
	double n, a;
	cin >> n;
	cin >> a;
	int x = 1;
	while (a * x < n && x > 0) {
		double multiplo = a * x;
		cout << multiplo;
		x++;
	}
	return 0;
}