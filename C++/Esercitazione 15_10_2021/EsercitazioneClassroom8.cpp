#include <iostream>
using namespace std;


int main (){
    int n;
    cout << "Dammi un numero e ti dirò se la sua potenza è pari o dispari\n\n";
    cin >> n;
    if (n % 2 == 0){
            cout << "Il tuo numero è pari anche se si fa la potenza\n";
        
        } else {
            cout << "Il tuo numero è dispari anche se si fa la potenza\n";
        }
}