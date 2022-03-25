/*
L'azienda Rapisardi Corpation dopo una lunga riunione del consiglio di ammministazione, ha deciso che per ottimizzare
i processi aziendali necessita di un software gestionale per catalogare i prodotti presenti nel magazzino.
Hanno dunque deciso che il software in questione dovrC  avere un menC9 ocn le seguenti funzionalitC :
1) Inserimento prodotto;
2) Ricerca prodotto;
3) Cancellazione di un prodotto;
4) Somma totale valore prodotti;
5) Somma del valore dei prodotti della stessa tipologia;
*/

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <string>
using namespace std;

string Rosso = "\x1b[31m";
string Giallo = "\x1b[33m";
string Verde = "\x1b[32m";
string Blue = "\x1b[94m";
string Magenta = "\x1b[95m";
string ColoreDefault = "\x1b[0m";
string Bold = "\x1b[1m";
string AttributiStringOff = "\x1b[0m";

void Clear() {
#if _WIN32
    system("cls");
#else
    system("clear");
#endif
}

string tipologia[] = { "Computer_Fisso", "Computer_Portatile", "Scheda_Video", "Mouse", "Tastiera", "Cuffie" };

int lunghezzaArray = 1000;

int codice[1000];
int quantita[1000];
int costo[1000];
string nome[1000];

void inizializzaArray(int* codice, int* quantita, int* costo, string* nome){
    
    for (int i = 0; i < lunghezzaArray; i++){
        codice[i] = -1;
        quantita[i] = 0;
        costo[i] = 0;
        nome[i] = "a";
    }
}

class gestoreMagazzino {
public:

    bool flag = false;
    int sceltaInt = 0, tmp = -1, tmpTip = -1;
    string sceltaString;

    void home() {
        cout << Bold << Rosso << "=====================" << endl;
        cout << "====  Magazzino  ====" << endl;
        cout << "=====================" << endl << endl << AttributiStringOff;

        cout << Bold << Blue << "Cosa vuole fare?" << AttributiStringOff << endl;
        cout << Bold << Verde << "1) Inserire un prodotto." << endl;
        cout << "2) Ricercare un prodotto." << endl;
        cout << "3) Cancellare un prodotto. " << endl;
        cout << "4) Sommare il valore di tutti i prodotti preesenti nel magazzino." << endl;
        cout << "5) Sommare il valore dei prodotti della stessa tipologia presenti nel magazzino." << endl;
        cout << "6) Uscita." << AttributiStringOff << endl<<endl;
        cin >> sceltaInt;

        switch (sceltaInt) {
        case 1:Clear(); inserimentoProdotto(); break;
        case 2:Clear(); ricercaProdotto();  break;
        case 3:Clear(); cancellaProdotto();  break;
        case 4:Clear(); valoreMagazzino();  break;
        case 5://Clear(); valoreTipologiaProdotti();  break;
        case 6:break;
        default:
            cout << Bold << Giallo << "Hai sbagliato a inserire o non ho trovato quello che cerchi, riprova..." << AttributiStringOff << endl;
            sleep(4);
            Clear();
            home();
        }
    }

    void inserimentoProdotto() {
        cout << Bold << Rosso << "=====================" << endl;
        cout << "====  Magazzino  ====" << endl;
        cout << "=====================" << endl << endl << AttributiStringOff;

        cout << Bold << Magenta << "Ti ricordo per� che il codice ha un prefisso in base alla categoria:\n30 per pc fisso, 90 per portatile,\n89 per scheda video, 60 per mouse,\n72 per tastiera e 13 per cuffie.\n" << AttributiStringOff << Bold << Blue << "\nDimmi il codice del prodotto: " << AttributiStringOff;
        cin >> sceltaInt;
        verificaInput(sceltaInt);
        verificaCodice(sceltaInt);
        for (int i = 0; i < lunghezzaArray; i++) {
            if (codice[i] == -1) {
                codice[i] = sceltaInt;
                flag = true;
                break;
            }
        }
        for (int i = 0; i < lunghezzaArray; i++) {
            if (codice[i] == sceltaInt) {
                tmp = i;
                break;
            }
        }
        if (flag == false) {
            cout << Bold << Rosso << "Hai inserito il numero massimo di codici" << AttributiStringOff << endl;
            sleep(4);
            Clear();
            home();
        }
        cout << Bold << Blue << "\nDimmi il nome del prodotto: " << AttributiStringOff;
        cin >> sceltaString;
        getline(cin, sceltaString, '\n');
        if (sceltaString != "") {
            nome[tmp] = sceltaString;

            cout << Bold << Blue << "\nDimmi la quantità del prodotto: " << AttributiStringOff;
            cin >> sceltaInt;
            quantita[tmp] = sceltaInt;

            cout << Bold << Blue << "\nDimmi il costo del prodotto: " << AttributiStringOff;
            cin >> sceltaInt;
            costo[tmp] = sceltaInt;

            sleep(1);
            Clear();
            home();
        }
    }

    void ricercaProdotto() {
        cout << Bold << Rosso << "=====================" << endl;
        cout << "====  Magazzino  ====" << endl;
        cout << "=====================" << endl << endl << AttributiStringOff;

        cout << Bold << Blue << "Dimmi il codice del prodotto che vuoi cercare: " << AttributiStringOff;
        cin >> sceltaInt;
        verificaInput(sceltaInt);
        verificaCodice(sceltaInt);
        cout << Bold << Verde << "\nCodice: " << sceltaInt << "\nNome: " << nome[tmp] << "\nTipoligia: " << tipologia[tmpTip] << "\nQuantit�: " << quantita[tmp] << "\nCosto: " << costo[tmp] << " €";
        sleep(4);
        Clear();
        home();

    }

    void cancellaProdotto() {

        cout << Bold << Rosso << "=====================" << endl;
        cout << "====  Magazzino  ====" << endl;
        cout << "=====================" << endl << endl << AttributiStringOff;

        cout << Bold << Blue << "Dimmi il codice del prodotto che vuoi cancellare: " << AttributiStringOff;
        cin >> sceltaInt;
        verificaInput(sceltaInt);
        verificaCodice(sceltaInt);
        codice[tmp] = -1;
        quantita[tmp] = 0;
        costo[tmp] = -1;
        nome[tmp] = "a";
        sleep(1);
        Clear();
        home();
    }

    void valoreMagazzino() {
        cout << Bold << Rosso << "=====================" << endl;
        cout << "====  Magazzino  ====" << endl;
        cout << "=====================" << endl << endl << AttributiStringOff;

        int totQuantita = 0, totPrezzo = 0, totCosto = 0;

        for (int i = 0; i < lunghezzaArray; i++) {
            if (quantita[i] > 0 && costo[i] > 0) {
                totQuantita += quantita[i];
                totCosto += (costo[i] * quantita[i]);
            }
        }
        cout <<Verde<<Bold<<"Hai " << totQuantita <<" prodotti in magazzino."<<endl<<"Dal valore di: "<<totCosto<<"€"<<endl<<endl<<Rosso<<"Ritorno alla home..." <<AttributiStringOff<< endl;
        sleep(4);
        Clear();
        home();
    }

    int verificaCodice(int code) {
        bool flag = false;
        while (flag == false) {
            int risultato = code / 1000;
            switch (risultato) {
            case 30: tmpTip = 0; flag = true; break;
            case 90: tmpTip = 1; flag = true; break;
            case 89: tmpTip = 2; flag = true; break;
            case 60: tmpTip = 3; flag = true; break;
            case 72: tmpTip = 4; flag = true; break;
            case 13: tmpTip = 5; flag = true; break;
            default: cout << Rosso << Bold << "Non esistono categorie con questo prefisso, o potrebbe non esistere alcun prodotto, riprova..." << AttributiStringOff << endl; cin >> code;
            }
        }
        return code;
    }

    int verificaInput(int riprova) {
        while (cin.fail()) {
            cin.clear();
            cout << Bold << Rosso << "\nHai sbagliato a digitare il codice prodotto, riprova...\n" << AttributiStringOff;
            cin.ignore(1000, '\n');
            cin >> riprova;
        }
        return riprova;
    }

};

int main() {
    inizializzaArray(codice, quantita, costo, nome);
    gestoreMagazzino gestore;
    gestore.home();
}
