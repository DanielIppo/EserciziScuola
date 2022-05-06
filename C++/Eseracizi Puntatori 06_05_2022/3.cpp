/*3) Implementare la funzione swap passandogli i valori tramite puntatori.*/

#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b; 
    *b = tmp;
}

int main()
{
    int a = 2, b = 4;
    swap(a, b);
    cout << a << " "<< b ; 

    return 0;
}
