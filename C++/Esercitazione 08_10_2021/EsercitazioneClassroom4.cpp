#include <iostream>
using namespace std;

int main(){
    double lato, raggio, quadratoarea, quadratoperimetro, cerchioarea, cerchioperimetro;
    cout<<"Dammi il lato del quadrato e il raggio della circonferenza"<<endl;
    cin>>lato;
    cin>>raggio;
    quadratoperimetro= lato * 4;
    cerchioperimetro= raggio * 2 * 3.14;
    if (quadratoperimetro > cerchioperimetro){
        cout<<"Il tuo quadrato ha un perimetro maggiore"<<endl;
    }
    else {
        cout<<"Il tuo cerchio ha un perimetro maggiore"<<endl;
    }
    quadratoarea = lato * lato;
    cerchioarea = raggio * raggio * 3.14;
        if (quadratoarea > cerchioarea){
        cout<<"Il tuo quadrato ha un area maggiore"<<endl;
    }
    else {
        cout<<"Il tuo cerchio ha un area maggiore"<<endl;
    }
    return 0;
}