/*Stampare i numeri pari minori di N in ordine decrescente.*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Scrivi un numero e io ti darò tutti i numeri minori e pari di esso in ordine decrescente\n";
    cin >> n;
    for (int i = n; i >= 0; i= i - 2){
        cout << i << endl;
    }

    return 0;
}
