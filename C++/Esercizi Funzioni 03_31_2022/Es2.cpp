/*1) Creare una funzione che calcola il cubo di un numero.*/
#include <iostream>
using namespace std;

void valoreAssolutoNumero(int &x){
    if (x<0){
        x = x*-1;
    }
}

int main()
{
    int numero;
    cout << "Inserisci un numero e lo farò diventare assoluto: ";
    cin >> numero;
    valoreAssolutoNumero(numero);
    cout <<"Il valore assoluto è: "<<numero;
    return 0;
}