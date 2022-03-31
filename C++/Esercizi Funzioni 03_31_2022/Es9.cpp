/*9) Creare una funzione che dice se un carattere è una vocale.*/
#include <iostream>
using namespace std;

bool verificaVocale(char carattere){
    char vocali [10] = {'a', 'e','i','o','u','A','E','I','O','U'};
    for (int i = 0; i < 10; i++){
        return (carattere == vocali[i]) ? true : false;
    }

}

int main()
{
    char carattere;
    cout << "Inserisci un carattere e ti dirò se è una vocale: ";
    cin >> carattere;
    int verifica = verificaVocale(carattere);
    if (verifica == 1){
        cout << "Il tuo carattere è una vocale.";
    } else {
        cout << "Il tuo carattere non è una vocale.";
    }
    return 0;
}