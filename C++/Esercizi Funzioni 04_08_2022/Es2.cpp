/*2) Risolve un equazione di secondo grado del tipo ax2+bx+c=0*/
#include <iostream>
using namespace std;

void solveSecondDegreeEquation(int a, int b, int c){
	//calculate the delta
	int d = b*b - 4*a*c;
	//if the delta is negative, the equation has no solution
	if(d<0){
		cout << "L'equazione non ha soluzioni" << endl;
	}
	//if the delta is zero, the equation has one solution
	else if(d==0){
		int solution;
		solution = (-b + sqrt(d)) / (2 * a);
		cout << "L'equazione ha solo una soluzione: " << solution << endl;
	}
	//if the delta is positive, the equation has two solutions
	else{
		int solution1, solution2;
		solution1 = (-b + sqrt(d))/(2*a);
		solution2 = (-b - sqrt(d))/(2*a);
		cout << "L'equazione ha 2 soluzioni: " << solution1 << " e " << solution2 << endl;
	}
}


int main() {
	int a, b, c;
	cout << "Inserisci il coefficiente a: ";
	cin >> a;
	cout << "Inserisci il coefficiente b: ";
	cin >> b;
	cout << "Inserisci il coefficiente c: ";
	cin >> c;
	
	solveSecondDegreeEquation(a, b, c);
}