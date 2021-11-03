#include <iostream>
using namespace std;
int main () {
    int n;
    cout<< "Dammi un numero e ti dirò se se è pari o dispari"<<endl;
    cin >> n;
    if (n % 2 == 0){
        cout<<"Il tuo numero è pari";
    } else {
        cout<<"Il tuo numero è dispari";
    }
}