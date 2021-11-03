#include <iostream>
using namespace std;
int main () {
    int n, n1;
    cout<< "Dammi un numero e ti dirò se è divisibile per un secondo numero che mi dai"<<endl;
    cin >> n;
    cin >> n1;
    if (n % n1 == 0){
        cout<<"Il tuo numero è divisibile";
    } else {
        cout<<"Il tuo numero non è divisibile";
    }
}