/*3) Calcola la media dei voti presi da un numero N di studenti in un compito in classe, con N inserito da tastiera*/
#include <iostream>
using namespace std;

float average(int n, double grades[]){
	float sum = 0;
	for(int i = 0; i < n; i++){
		sum += grades[i];
	}
	return sum/n;
}

int main() {
	int n = 0;
	cout << "Inserisci il numero di alunni: ";
	cin >> n;
	double grades[20] = {};
	for(int i = 0; i < n; i++){
		cout << "Inserisci il voto dell'alunno " << i+1 << ": ";
		cin >> grades[i];
	}
	cout << "La media dei voti è: " << average(n, grades) << endl;
	return 0;
	
}