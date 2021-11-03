#include <iostream>
using namespace std;
int main () {
    int n;
    cout<< "Dammi un numero e ti dirò se è divisibile sia per 3 che per 5"<<endl;
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0){
        cout<<"Il tuo numero è divisibile";
    } else {
        cout<<"Il tuo numero non è divisibile";
    }
}