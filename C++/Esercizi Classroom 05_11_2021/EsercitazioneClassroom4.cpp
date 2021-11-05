#include <iostream>
using namespace std;

int main(){
    int n, a;
    cout << "Dammi due numeri\n";
    cin >> n;
    cin >> a;
    if (a % 2 == 0){
        while(a <= n){
            cout << a << " ";
            a = a + 2;
        }
    }
    else if (a % 5 == 0){
        while(a <= n){
            cout << a << " ";
            a = a + 5;
        }
    }
    else if (a % 7 == 0){
        while(a <= n){
            cout << a << " ";
            a = a + 7;
        }
    }
    else if (a % 9 == 0){
        while(a <= n){
            cout << a << " ";
            a = a + 9;
        }
    }
    else if (a % 11 == 0){
        while(a <= n){
            cout << a << " ";
            a = a + 11;
        }
    }
    return 0;
}