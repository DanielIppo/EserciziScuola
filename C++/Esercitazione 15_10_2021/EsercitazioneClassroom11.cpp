#include <iostream>
using namespace std;

int main () {
    int base, esponente;
    cout<< "Dimmi la base e l'esponente della potenza è ti dirò il suo segno\n";
    cin>> base;
    cin>> esponente;
    if (base < 0 && esponente % 2 != 0 or base > 0 && esponente < 0) {
        cout << "La potenza è negativa\n";
        
    }
    else if (base > 0 && esponente % 2 == 0 or base > 0 && esponente % 2 != 0) {
        cout<< "La potenza è positiva\n";
    }

}