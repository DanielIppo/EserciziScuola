/*1) Creare una funzione che calcola il cubo di un numero.*/
#include <iostream>
using namespace std;

void cuboDelNumero(int &x){
    x = x*x*x;
}

int main()
{
    int numero;
    cout << "Inserisci un numero e ti calcolerò il cubo: ";
    cin >> numero;
    cuboDelNumero(numero);
    cout <<"Il cubo è: "<<numero;
    return 0;
}