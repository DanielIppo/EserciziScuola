#include <iostream>

using namespace std;

int main()
{
    double numero, quadrato, successivo;
    cout<<"Inserisci un numero e ti calcoleremo il successore del quadrato"<<"\n";
    cin>> numero;
    quadrato=(numero * numero);
    successivo=(quadrato + 1);
    cout<<"Il tuo numero è ";
    cout<<successivo;
    return 0; 
    

    
}

