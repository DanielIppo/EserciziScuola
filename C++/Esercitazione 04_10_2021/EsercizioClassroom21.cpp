#include <iostream>

using namespace std;

int main()
{
    double numero, quadrato, differenza;
    cout<<"Inserisci un numero e ti calcoleremo la differenza tra il quadrato e il numero."<<"\n";
    cin>> numero;
    quadrato=(numero * numero);
    differenza=(quadrato - numero);
    cout<<"Il tuo numero è ";
    cout<<differenza;
    return 0; 
    

    
}

