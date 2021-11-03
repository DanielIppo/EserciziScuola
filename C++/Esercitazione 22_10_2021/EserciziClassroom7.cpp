#include <iostream>
using namespace std;
int main() {
    int giorno;
    string mese;
    cout << "Dimmi la tua data di nascita per sapere di che segno zodiacale sei!!\n\nIl tuo giorno\n\n";
    cin >> giorno;
    cout << "\n\nOra il mese\n\n";
    cin >> mese;
    if (((giorno >= 21 && giorno <= 31) && (mese == "marzo")) or ((giorno >= 1 && giorno <= 20) && (mese == "aprile"))) {
        cout << "\n\nIl tuo segno e' ariete\n\n";
        system("pause");
        system("cls");
        main();
    }
    else if (((giorno >= 21 && giorno <= 31) && (mese == "aprile")) or ((giorno >= 1 && giorno <= 20) && (mese == "maggio"))) {
        cout << "\n\nIl tuo segno e' toro\n\n";
        system("pause");
        system("cls");
        main();
    }
    else if (((giorno >= 21 && giorno <= 31) && (mese == "maggio")) or ((giorno >= 1 && giorno <= 21) && (mese == "giugno"))) {
        cout << "\n\nIl tuo segno e' gemelli\n\n";
        system("pause");
        system("cls");
        main();
    }
    else if (((giorno >= 22 && giorno <= 31) && (mese == "giugno")) or ((giorno >= 1 && giorno <= 22) && (mese == "luglio"))) {
        cout << "\n\nIl tuo segno e' cancro\n\n";
        system("pause");
        system("cls");
        main();
    }
    else if (((giorno >= 23 && giorno <= 31) && (mese == "luglio")) or ((giorno >= 1 && giorno <= 23) && (mese == "agosto"))) {
        cout << "\n\nIl tuo segno e' leone\n\n";
        system("pause");
        system("cls");
        main();
    }
    else if (((giorno >= 24 && giorno <= 31) && (mese == "agosto")) or ((giorno >= 1 && giorno <= 22) && (mese == "settembre"))) {
        cout << "\n\nIl tuo segno e' vergine\n\n";
        system("pause");
        system("cls");
        main();
    }
    else if (((giorno >= 22 && giorno <= 31) && (mese == "settembre")) or ((giorno >= 1 && giorno <= 22) && (mese == "ottobre"))) {
        cout << "\n\nIl tuo segno e' bilancia\n\n";
        system("pause");
        system("cls");
        main();
    }
    else if (((giorno >= 23 && giorno <= 31) && (mese == "ottobre")) or ((giorno >= 1 && giorno <= 22) && (mese == "novembre"))) {
        cout << "\n\nIl tuo segno e' scorpione\n\n";
        system("pause");
        system("cls");
        main();
    }
    else if (((giorno >= 23 && giorno <= 31) && (mese == "novembre")) or ((giorno >= 1 && giorno <= 21) && (mese == "dicembre"))) {
        cout << "\n\nIl tuo segno e' sagittario\n\n";
        system("pause");
        system("cls");
        main();
    }
    else if (((giorno >= 22 && giorno <= 31) && (mese == "dicembre")) or ((giorno >= 1 && giorno <= 20) && (mese == "gennaio"))) {
        cout << "\n\nIl tuo segno e' capricorno\n\n";
        system("pause");
        system("cls");
        main();
    }
    else if (((giorno >= 21 && giorno <= 31) && (mese == "gennaio")) or ((giorno >= 1 && giorno <= 19) && (mese == "febbraio"))) {
        cout << "\n\nIl tuo segno e' acquario\n\n";
        system("pause");
        system("cls");
        main();
    }
    else if (((giorno >= 20 && giorno <= 31) && (mese == "febbraio")) or ((giorno >= 1 && giorno <= 20) && (mese == "marzo"))) {
        cout << "\n\nIl tuo segno e' pesci\n\n";
        system("pause");
        system("cls");
        main();
    }
    else {
        cout << "\n\nHai sbagliato a inserire qualche dato, riprova\n\n";
        system("pause");
        system("cls");
        main();
    }
    return 0;
}