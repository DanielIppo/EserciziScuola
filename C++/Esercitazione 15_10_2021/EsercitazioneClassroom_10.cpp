#include <iostream>
using namespace std;

int main () {
    int n1, n2, somma;
    cout<< "Dimmi due numeri e ti dirò se la loro somma è pari o dispari\n";
    cin>> n1;
    cin>> n2;
    if (n1 % 2 == 0 && n2 % 2 == 0){
       cout<<"La somma dei tuoi numeri è pari\n";
       somma = n1 + n2;
       cout << somma;
    }
    else if (n1 % 2 != 0 && n2 % 2 != 0){
    cout<< "La somma dei tuoi numeri è pari\n";
    somma = n1 + n2;
    cout << somma;
    }
    else  {
        cout<< "La somma dei tuoi numeri è dispari\n";
            somma = n1 + n2;
            cout << somma;
    }
}
