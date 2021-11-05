#include <iostream>
using namespace std;
int main () {
    int n = 0;
    int volte;
    cout << "Inserisci un numero\n";
    cin >> volte;
    while (n <= volte) {
        cout << n;
        n++;
    }
    return 0;
}