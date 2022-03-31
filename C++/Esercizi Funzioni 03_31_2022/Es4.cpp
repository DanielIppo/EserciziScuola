/*1) Creare una funzione che calcola il cubo di un numero.*/
#include <iostream>
using namespace std;

void oreToSecond(int ore, int ore1){
    if (ore > ore1){
        cout << "Il primo orario è più grande";
    }
    else{
        cout << "Il secondo orario è più grande";
    }
}

int main()
{
    int ore, minuti, secondi, ore1, minuti1, secondi1;
    cout << "Inserisci il primo orario e lo confronterò col secondo: ";
    cin >> ore;
    cout <<"Ora inserisci i minuti: ";
    cin >> minuti;
    cout <<"Ora inserisci i secondi: ";
    cin >> secondi;
    cout << "Inserisci il secondo orario e lo confronterò col primo: ";
    cin >> ore1;
    cout <<"Ora inserisci i minuti: ";
    cin >> minuti1;
    cout <<"Ora inserisci i secondi: ";
    cin >> secondi1;
    oreToSecond(ore, ore1);

    return 0;
}