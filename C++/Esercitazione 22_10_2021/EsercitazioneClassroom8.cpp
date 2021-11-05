#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int a, b, c;
    cout << "Ciao io sono il tuo bot, ti calcolerò qualsiasi equazione di secondo grado\n\nInserisci i tuoi dati \n\n";
    cin >> a;
    cin >> b;
    cin >> c;
    int primadelta = (b * b) - 4 * a * c;
    int delta = sqrt(primadelta);
    int risultato1 = -b + delta / 2 * a;
    int risultato2 = -b - delta / 2 * a;
    cout << "I tuoi risultati sono; \n X1 =" << risultato1 << "\nX2 =" << risultato2 << endl;
    system ("pause");
    system ("cls");
    main ();
    return 0;
}