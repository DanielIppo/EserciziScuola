#include <iostream>
using namespace std;
int main () {
    int n;
    cout<< "Dammi un numero e ti dirÃ² se Ã¨ divisibile sia per 3 che per 7"<<endl;
    cin >> n;
    if (n % 3 == 0 or n % 7 == 0){
        cout<<"Il tuo numero Ã¨ divisibile";
    } else {
        cout<<"Il tuo numero non Ã¨ divisibile";
    }
}