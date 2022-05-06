/*2) Trovare il massimo tra due numeri tramite puntatori.*/

#include <iostream>
using namespace std;


int main()
{
    int a = 2, b = 4;
    int *d = &a; 
    int *c = &b;
    if (*d > *c){
        cout << "Il maggiore è: " << *d;
    } else {
        cout << "Il maggiore è: " << *c;
    } 

    return 0;
}
