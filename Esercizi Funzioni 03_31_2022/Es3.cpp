/*1) Creare una funzione che calcola il cubo di un numero.*/
#include <iostream>
using namespace std;

void oreToSecond(int &ore, int &minuti, int &secondi, int &secondiTotali){
    ore = (ore * 60) * 60;
    minuti = minuti * 60;
    secondiTotali = ore + minuti + secondi;
}

int main()
{
    int ore, minuti, secondi, secondiTotali=0;
    cout << "Inserisci le ore e le trasformerò in secondi: ";
    cin >> ore;
    cout <<"Ora inserisci i minuti: ";
    cin >> minuti;
    cout <<"Ora inserisci i secondi: ";
    cin >> secondi;
    oreToSecond(ore, minuti, secondi, secondiTotali);
    cout <<"L'orario inserito da te in secondi è: "<<secondiTotali;
    cout << "\nLe tue ore sono diventate: "<<ore<<" secondi.\n";
    cout << "I tuoi minuti sono diventati: "<<minuti<<"secondi.";
    return 0;
}