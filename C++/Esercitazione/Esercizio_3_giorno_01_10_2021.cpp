#include <iostream>

using namespace std;

int main()
{
    int angolo1, angolo2, angolo3; 
    cout << "dammi il primo angolo";
    cin >> angolo1 ;
    cout  << "dammi il secondo angolo";
    cin >> angolo2;
    cout << "dammi il terzo numero";
    cin >> angolo3;
    int angolototale = angolo1 + angolo2 + angolo3;
if (angolototale==180) {
    cout << "Questi sono angoli interni di un triangolo " ;
}
else {
    cout << "Questi non sono angoli interni di un triangolo" ;
}
return 0;
}
