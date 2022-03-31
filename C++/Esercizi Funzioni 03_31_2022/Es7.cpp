/*1) Creare una funzione che calcola il cubo di un numero.*/
#include <iostream>
using namespace std;

void numeroReale(int numero){
    
    if (numero >= 0){
        cout << "Il numero è Reale.";
    } else {
        cout << "Il numero non è Reale.";
    }
}

int main()
{
    int numero;
    cin >> numero;
    numeroReale(numero);

    return 0;
}