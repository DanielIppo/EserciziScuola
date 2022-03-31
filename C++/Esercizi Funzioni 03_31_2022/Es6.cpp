/*1) Creare una funzione che calcola il cubo di un numero.*/
#include <iostream>
using namespace std;

int differenzaGrandePiccolo(int numero1, int numero2, int numero3){
    
    int grande, piccolo, differenza;
    
    if (numero1 > numero2){
        if (numero1 > numero3){
            grande = numero1;
            piccolo = numero2;
        }
        else{
            grande = numero3;
            piccolo = numero2;
        }
    } else {
        if (numero2 > numero3){
            grande = numero2;
            piccolo = numero1;
        }
        else{
            grande = numero3;
            piccolo = numero1;
        }
    }
    differenza = grande - piccolo;
    return differenza;
}

int main()
{
    int numero1, numero2, numero3;
    cin >> numero1;
    cin >> numero2;
    cin >> numero3;
    cout << "La differenza tra il più grande è il più piccolo è: " <<differenzaGrandePiccolo(numero1, numero2, numero3);

    return 0;
}