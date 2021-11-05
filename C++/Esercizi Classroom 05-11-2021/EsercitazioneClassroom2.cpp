#include <iostream>
using namespace std;
int main () {
    int n;
    int verifica = 0;
    cout<<"Inserisci un numero\n\n";
    cin>> n;
    if (n % 2 == 0){
        while(n >= verifica){
            cout << "\n" << verifica;
            verifica = verifica + 2;
        }
    } else {
        n = n - 1;
        while (n >= verifica){
            cout << "\n" << verifica;
            verifica = verifica + 2;
        }
    }
    return 0;
}