/*4) Restituisce il maggiore e il minore di una serie di numeri inseriti da tastiera*/
#include <iostream>
using namespace std;

void biggestAndSmallest(int numbers[]) {
	int biggest = numbers[0];
	int smallest = numbers[0];
	for (int i = 0; i < 5; i++) {
		if (numbers[i] > biggest) {
			biggest = numbers[i];
		}
		if (numbers[i] < smallest) {
			smallest = numbers[i];
		}
	}
	cout << "Il numero più grande è: " << biggest << endl;
	cout << "Il numero più piccolo è: " << smallest << endl;
}



int main() {
	const int n = 5;
	int numbers[n];
	for (int i = 0; i < 5; i++) {
		cout<<"[" << i + 1 <<"/"<<n<< "]Inserisci un numero: ";
		cin >> numbers[i];
	}
	biggestAndSmallest(numbers);
}