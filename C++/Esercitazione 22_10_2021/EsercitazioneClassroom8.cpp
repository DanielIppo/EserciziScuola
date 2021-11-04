#include <iostream>

using namespace std;

int main()
{
    int studenti, voto;
    cin >> studenti;
    int voto1 = 0;
    for (int i =0;i <= studenti - 1; i++){
        cin >> voto;
        voto1 = voto1 + voto;
    }
    int media = voto1 / studenti;
    cout << media;
    return 0;
}
