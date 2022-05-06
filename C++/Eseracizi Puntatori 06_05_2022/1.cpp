/*1) sottrarre due variabili tramite puntatori*/

#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 4, somma;
    int* c = &a;
    int* d = &b;
    int* r = &somma;
    
    somma = *c + *d;
    
    cout << *r; 

    return 0;
}
