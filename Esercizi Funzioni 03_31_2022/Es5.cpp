/*1) Creare una funzione che calcola il cubo di un numero.*/
#include <iostream>
using namespace std;

void verificaCaps(char carattere){
    
    if (carattere >= 'A' && carattere<= 'Z'){
        cout << "Il carattere è in maiuscolo";
    }
    else{
        cout << "Il carattere è in minuscolo";
    }
}

int main()
{
    char carattere;
    cin >> carattere;
    verificaCaps(carattere);

    return 0;
}