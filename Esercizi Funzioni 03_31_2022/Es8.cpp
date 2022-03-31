/*8) Creare una funzione che restituisce se un numero intero ha almeno 3 divisori.*/
#include <iostream>
using namespace std;

bool numeriDivisori(int x){
    int nDivisori = 0;
    for(int i = 0; i<x; i++){
        if (x%i == 0){
            nDivisori++;
        }
    }
    return (nDivisori > 3) ? true : false;
}

int main()
{
    int numero = 0;
    cout << "inserisci un numero e ti dirò se ha 3 divisori: ";
    cin >> numero;
    int verifica = numeriDivisori(numero);
    if (verifica == 1){
        cout << "Il tuo numero ha 3 divisori.";
    } else {
        cout << "Il tuo numero non ha 3 divisori.";
    }
    return 0;
}