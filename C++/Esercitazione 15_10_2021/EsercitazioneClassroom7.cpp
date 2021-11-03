#include <iostream>
using namespace std;
int main () {
    int n, n1, n2;
    cin >> n;
    cin >> n1;
    cin >> n2;
    if (n != 0 && n1 % n == 0 && n2 % n == 0){
        cout<<"Il tuo numero è divisore";
    } else {
        cout<<"Il tuo numero non è divisore";
    }
}