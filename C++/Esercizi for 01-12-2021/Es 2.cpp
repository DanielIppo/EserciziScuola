/*Stampare i numeri pari minori di N.*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Scrivi un numero e io ti darò tutti i numeri minori e pari di esso\n";
    cin >> n;
    for (int i = 0; i <= n; i= i + 2){
        cout << i << endl;
    }

    return 0;
}
