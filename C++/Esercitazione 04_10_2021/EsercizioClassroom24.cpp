#include <iostream>

using namespace std;

int main()
{
    double prezzo, aumento, sconto, prezzo_scontato;
    cout<<"Dimmi l'aumento che desideri";
    cin>>aumento;
    cout<<"Dimmi il prezzo della merce";
    cin>>prezzo;
    sconto= (prezzo*10/100);
    prezzo_scontato= (prezzo-sconto);
    cout<<"Devi pagare";
    cout<<prezzo_scontato;
    

    
}

