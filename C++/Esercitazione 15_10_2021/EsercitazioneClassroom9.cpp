#include <iostream>
using namespace std;


int main (){
    int numeratore, denominatore;
    cout << "Dammi il numeratore e denominatore di una frazione e ti drò se è apparente, propria o impropria\n\n";
    cin >> numeratore;
    cin >> denominatore;
    if (numeratore == denominatore or (denominatore * 2) == numeratore){
            cout << "La tua frazione è apparente";
        }
        else if (numeratore > denominatore){
            cout << "La tua frazione è impropria";
        }
        else if (numeratore < denominatore){
            cout << "La tua frazione è propria";
        }
}