/*Stampare i primi N numeri interi.*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Scrivi un numero e io ti darò tutti i numeri minori di esso\n";
    cin >> n;
    for (int i = 0; i <= n; i++){
        cout << i << endl;
    }

    return 0;
}
