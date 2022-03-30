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
#include <fstream>
#include <algorithm>
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

void Sleep4() {
#if _WIN32
    Sleep(4);
#else
    sleep(4);
#endif
}



const int grandezzaFile = 1000;
string nomeFile = "prodotti.txt";

int codice[grandezzaFile] = {};

void inizializzaArray(int* codice) {

    for (int i = 0; i < grandezzaFile; i++) {
        codice[i] = -1;
    }
}

int verificaInput(int &riprova) {
    while (cin.fail()) {
        cin.clear();
        cout << Bold << Rosso << "\nHai sbagliato a digitare il codice prodotto, riprova...\n" << AttributiStringOff;
        cin.ignore(1000, '\n');
        cin >> riprova;
    }
    return riprova;
}

int generaCodice() {
    if (codice[0] == -1) {
        return 0;
    }
    for (int i = 0; i < grandezzaFile; i++) {
        if (codice[i + 1] == -1) {
            return i + 1;
        }
    }
    return -1;
}

string get_right_of_delim(string const& str, string const& delim) {
    return str.substr(str.find(delim) + delim.size());
}

string get_left_of_delim(string const& str, string const& delim) {
    return str.substr(0, str.find(delim));
}



class gestoreMagazzino {
public:

    void inserimentoProdotto() {
        cout << Bold << Rosso << "=====================" << endl;
        cout << "====  Magazzino  ====" << endl;
        cout << "=====================" << endl << endl << AttributiStringOff;

        string sceltaTipologia, sceltaNome;
        int sceltaQuantita, sceltaCosto;

        cout << Verde << Bold << "Inserisci la tipologia del prodotto: " << AttributiStringOff;
        cin.ignore();
        getline(cin, sceltaTipologia, '\n');
        if (sceltaTipologia != "") {

            cout << Verde << Bold << "Inserisci il nome del prodotto: " << AttributiStringOff;
            getline(cin, sceltaNome, '\n');

            cout << Verde << Bold << "Inserisci la quantità del prodotto: " << AttributiStringOff;
            cin >> sceltaQuantita;

            cout << Verde << Bold << "Inserisci il costo del prodotto: " << AttributiStringOff;
            cin >> sceltaCosto;

            int codice = generaCodice();

            salvaProdottoSuFile(sceltaTipologia, sceltaNome, sceltaQuantita, sceltaCosto, codice);
        }
        Clear();
        home();
    }

    void home() {

        int sceltaInt = 0;

        cout << Bold << Rosso << "=====================" << endl;
        cout << "====  Magazzino  ====" << endl;
        cout << "=====================" << endl << endl << AttributiStringOff;

        cout << Bold << Blue << "Cosa vuole fare?" << AttributiStringOff << endl;
        cout << Bold << Verde << "1) Inserire un prodotto." << endl;
        cout << "2) Ricercare un prodotto." << endl;
        cout << "3) Cancellare un prodotto. " << endl;
        cout << "4) Sommare il valore di tutti i prodotti preesenti nel magazzino." << endl;
        cout << "5) Sommare il valore dei prodotti della stessa tipologia presenti nel magazzino." << endl;
        cout << "6) Uscita." << AttributiStringOff << endl << endl;
        cin >> sceltaInt;

        switch (sceltaInt) {
        case 1:Clear(); inserimentoProdotto(); break;
        case 2:Clear(); listaProdotti(); break;
        case 3:Clear(); //cancellaProdotto();  break;
        case 4:Clear(); //valoreMagazzino();  break;
        case 5:Clear(); //valoreTipologiaProdotti();  break;
        case 6:break;
        default:
            cout << Bold << Giallo << "Hai sbagliato a inserire o non ho trovato quello che cerchi, riprova..." << AttributiStringOff << endl;
            Sleep4();
            Clear();
            home();
        }
    }

    void listaProdotti() {        
        ifstream myfile(nomeFile);
        string linea;
        
        if (myfile.is_open()) {
            while (getline(myfile, linea)) {
                string tipologiaProdotto = get_left_of_delim(linea, ";");
                string nomeProdotto = get_left_of_delim(get_right_of_delim(linea, ";"), ";");
                string quantitaProdotto = get_left_of_delim(get_right_of_delim(get_right_of_delim(linea, ";"), ";"), ";");
                string costoProdotto = get_left_of_delim(get_right_of_delim(get_right_of_delim(get_right_of_delim(linea, ";"), ";"), ";"), ";");
                string codiceProdotto = get_left_of_delim(get_right_of_delim(get_right_of_delim(get_right_of_delim(get_right_of_delim(linea, ";"), ";"), ";"), ";"), ";");

                cout << ;
            }
        }




    }

    void salvaProdottoSuFile(string tipologia, string nome, int quantita, int costo, int codice) {
        ofstream myfile;
        myfile.open(nomeFile);
        if (myfile.is_open()) {
            myfile << tipologia << ";" << nome << ";" << quantita << ";" << costo << ";" << codice << "\n";
            myfile.close();
        }
    }

};

int main() {

    inizializzaArray(codice);
    gestoreMagazzino gestore;
    gestore.home();

    return 0;
}