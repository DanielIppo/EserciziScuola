/*4) Trovare la lunghezza di una stringa tramite puntatori: ricordarsi che le stringhe terminano con '\0'*/
#include <iostream>
using namespace std;


int main()
{
    char prova[1000] ;
    char *puntatore = &prova[0];
    int lunghezza;
    cin >> prova;
    bool flag = true; 
    int i = 0;
    while(flag == true){
        if(*puntatore == '\0'){
            lunghezza = i;
            flag = false;
        } else {
            lunghezza = i;
            i++;
            puntatore++;
        }
    }
    cout << lunghezza;
    return 0;
}
