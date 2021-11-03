#include <iostream>

using namespace std;

int main()
{
    double numero, doppio, quadrato, successivo;
    cout<<"Inserisci un numero e ti calcoleremo il quadrato del successivo del doppio del tuo numero."<<"\n";
    cin>> numero;
    doppio= (numero * 2);
    quadrato=(doppio * doppio);
    successivo=(quadrato + 1);
    cout<<"Il tuo numero è ";
    cout<<successivo;
    return 0; 
    

    
}

