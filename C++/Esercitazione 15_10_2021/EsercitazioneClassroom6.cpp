#include <iostream>
using namespace std;
int main () {
    int n, n1;
    cout<< "Dammi numeri e ti dirò se sono entrambi pari o dispari"<<endl;
    cin >> n;
    cin >> n1;
    if (n % 3 == 0 && n1 % 5 == 0){
        cout<<"Il tuoi numeri sono dispari";
    } else {
        cout<<"Il tuoi numeri non sono dispari";
    }
}