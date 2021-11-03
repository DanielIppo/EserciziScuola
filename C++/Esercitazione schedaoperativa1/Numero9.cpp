#include <iostream>
using namespace std;

int main() {
	double i, ii;
	cout << "scrivi un numero" << endl;
	cin >> i;
	while (i < 30.0)
	{
		cin>> ii;
		i = i + ii;
	}
	cout << "La somma dei tuoi numeri ha superato 30";
	return 0;
}