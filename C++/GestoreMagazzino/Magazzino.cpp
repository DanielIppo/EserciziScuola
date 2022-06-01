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
    Sleep(4000);
#else
    sleep(4);
#endif
}

void Sleep2() {
#if _WIN32
    Sleep(2000);
#else
    sleep(2);
#endif
}


const int grandezzaFile = 1000;
string nomeFile = "ProdottiGG.txt";

int codiceP[grandezzaFile] = {};
double prezzoP[grandezzaFile] = {};
int quantitaP[grandezzaFile] = {};
string nomeP[grandezzaFile] = {};
string tipoP[grandezzaFile] = {};
int IndexArray = 0;

int verificaInput(int riprova, string stringa) {
    while (cin.fail()) {
        cin.clear();
        cout << Bold << Rosso << "\nHai sbagliato a digitare il codice prodotto, riprova...\n" << AttributiStringOff;
        cout << "\033[A\33[2K\033[A\33[2K\r"<<stringa<< Verde << Bold;
        cin.ignore(1000, '\n');
        cin >> riprova;
    }
    return riprova;
}

void header() {
    cout << Bold << Rosso << "=====================" << endl;
    cout << "====  Magazzino  ====" << endl;
    cout << "=====================" << endl << endl << AttributiStringOff;
}


string get_right_of_delim(string const& str, string const& delim) {
    return str.substr(str.find(delim) + delim.size());
}

string get_left_of_delim(string const& str, string const& delim) {
    return str.substr(0, str.find(delim));
}


class GestoreFileArray {
	
public:
	
    void inizializzaArray(string* tipo, string* nome, int* quantita,  double* prezzo, int* codice) {

        for (int i = 0; i < grandezzaFile; i++) {
			tipo[i] = "-1";
			nome[i] = "-1";
			quantita[i] = -1;
			prezzo[i] = -1;
            codice[i] = -1;
        }
    }
	
    void listaProdottiNellArray() {
        ifstream myfile(nomeFile);
        string linea;

        if (myfile.is_open()) {
            while (getline(myfile, linea)) {
                for (int i = 0; i < grandezzaFile; i++) {
                    string tipologiaProdotto = get_left_of_delim(linea, ";");
                    string nomeProdotto = get_left_of_delim(get_right_of_delim(linea, ";"), ";");
                    string quantitaProdotto = get_left_of_delim(get_right_of_delim(get_right_of_delim(linea, ";"), ";"), ";");
                    string costoProdotto = get_left_of_delim(get_right_of_delim(get_right_of_delim(get_right_of_delim(linea, ";"), ";"), ";"), ";");
                    string codiceProdotto = get_left_of_delim(get_right_of_delim(get_right_of_delim(get_right_of_delim(get_right_of_delim(linea, ";"), ";"), ";"), ";"), ";");

                    codiceP[i] = stoi(codiceProdotto);
                    prezzoP[i] = stod(costoProdotto);
                    nomeP[i] = nomeProdotto;
                    tipoP[i] = tipologiaProdotto;
                }
            }
        }
    }

    void salvaProdottoSuFile(string *tipologia, string *nome, int *quantita, double *costo, int *codice) {
        ofstream myfile;
        myfile.open(nomeFile);
        if (myfile.is_open()) {
            for (int i = 0; i < grandezzaFile; i++) {
                if (tipologia[i] != "-1") {
                    myfile << tipologia[i] << ";" << nome[i] << ";" << quantita[i] << ";" << costo[i] << ";" << codice[i] << "\n";
                    myfile.close();
                }
            }
        }
    }
	
    void salvaProdottoSuArray(string tipologia, string nome, int quantita, double costo, int codice) {
		tipoP[IndexArray] = tipologia;
		nomeP[IndexArray] = nome;
		quantitaP[IndexArray] = quantita;
		prezzoP[IndexArray] = costo;
		codiceP[IndexArray] = codice;
        IndexArray++;
	}
		
};
GestoreFileArray gestoreFileArray;

class GestoreMagazzino {
public:

    void inserimentoProdotto() {
        
        header();

        string sceltaTipologia, sceltaNome;
        int sceltaQuantita{}, sceltaCosto{}, sceltaCodice{};

        cout << Verde << Bold << "Inserisci la tipologia del prodotto: " << AttributiStringOff;
        cin.ignore();
        getline(cin, sceltaTipologia, '\n');
        if (sceltaTipologia != "") {
            cout << Verde << Bold << "Inserisci il nome del prodotto: " << AttributiStringOff;
            getline(cin, sceltaNome, '\n');

            cout << Verde << Bold << "Inserisci la quantità del prodotto: " << AttributiStringOff;
            cin >> sceltaQuantita;
			sceltaQuantita = verificaInput(sceltaQuantita, "Inserisci la quantità del prodotto: ");

            cout << Verde << Bold << "Inserisci il costo del prodotto: " << AttributiStringOff;
            cin >> sceltaCosto;
			sceltaCosto = verificaInput(sceltaCosto, "Inserisci il costo del prodotto: ");
			
			cout << Verde << Bold << "Inserisci il codice del prodotto: " << AttributiStringOff;
			cin >> sceltaCodice;
			sceltaCodice = verificaInput(sceltaCodice, "Inserisci il codice del prodotto: ");
        }
		
        gestoreFileArray.salvaProdottoSuArray(sceltaTipologia, sceltaNome, sceltaQuantita, sceltaCosto, sceltaCodice);
        Clear();
        home();
    }
	
    void listaProdotti() {
        header();
		
        string nome;
        bool flag = false;
		
		cout <<Verde <<Bold<< "Dimmi il nome del prodotto da trovare: "<<AttributiStringOff;
        cin.ignore();
		getline(cin, nome, '\n');
        if (nome != "") {
            flag = true;
            for (int i = 0; i < grandezzaFile; i++) {
                if (nomeP[i] == nome) {
                    cout <<Verde<<Bold<< "\nTipologia: " << Blue << tipoP[i] << endl;
                    cout << Verde << Bold << "Nome: " << Blue << nomeP[i] << endl;
                    cout << Verde << Bold << "Quantità: " << Blue << quantitaP[i] << endl;
                    cout << Verde << Bold << "Costo: " << Blue << prezzoP[i] << endl;
                    cout << Verde << Bold << "Codice: " << Blue << codiceP[i] <<AttributiStringOff<< endl;
                    Sleep4();
                    flag = false;
                }
            }
			if (flag == true) {
				cout <<Rosso<<Bold<< "Nessun prodotto trovato" <<AttributiStringOff<< endl;
                Sleep2();
                Clear();
				home();
			}
        }
        Clear();
        home();
    }

    void cancellaProdotto() {
		header();
		
		string nome;
        int index = 0;
		bool flag = false;

		cout << Verde << Bold << "Dimmi il nome del prodotto da cancellare: " << AttributiStringOff;
		cin.ignore();
		getline(cin, nome, '\n');
        if (nome != "") {
            flag = true;
            for (int i = 0; i < grandezzaFile; i++) {
                if (nomeP[i] == nome) {
                    index = i;
                }
            }
            for (int i = index; codiceP[i] != -1; i++) {
                codiceP[i] = codiceP[i + 1];
                nomeP[i] = nomeP[i + 1];
                tipoP[i] = tipoP[i + 1];
                quantitaP[i] = quantitaP[i + 1];
                prezzoP[i] = prezzoP[i + 1];
            }
            if (flag == true) {
                cout << Rosso << Bold << "Nessun prodotto trovato" << AttributiStringOff << endl;
                Sleep2();
                Clear();
                home();
            } else {
				cout << Verde << Bold << "Prodotto cancellato" << AttributiStringOff << endl;
                IndexArray--;
				Sleep2();
				Clear();
				home();
			}
        }
    }
	
    void sommaValoreMagazzino() {
        header();
		
		double somma = 0;
        for (int i = 0; i < grandezzaFile; i++) {
            if (prezzoP[i] != -1) {
                somma += prezzoP[i] * quantitaP[i];
            }
        }
		cout << Verde << Bold << "La somma del valore del magazzino è: " << Blue << somma << AttributiStringOff << endl;
		Sleep2();
		Clear();
		home();
    }

    void sommaValoreMagazzinoProdotto() {
		header();
		
		string tipologia;
		double somma = 0;
		bool flag = false;
		
		cout << Verde << Bold << "Dimmi la tipologia: " << AttributiStringOff;
		cin.ignore();
		getline(cin, tipologia, '\n');
        if (tipologia != "") {
            flag = true;
            for (int i = 0; i < grandezzaFile; i++) {
                if (tipoP[i] == tipologia) {
                    somma += prezzoP[i] * quantitaP[i];
					flag = false;
                }
            }
            if (flag == true) {
                cout << Rosso << Bold << "Nessun prodotto trovato" << AttributiStringOff << endl;
                Sleep2();
                Clear();
                home();
            } else {
                cout << Verde << Bold << "La somma del valore del magazzino è: " << Blue << somma << AttributiStringOff << endl;
                Sleep2();
                Clear();
                home();
            }
        }		
    }
	
    void home() {

        int sceltaInt = 0;

        header();

        cout << Bold << Blue << "Cosa vuole fare?" << AttributiStringOff << endl;
        cout << Bold << Verde << "1) Inserire un prodotto." << endl;
        cout << "2) Ricercare un prodotto." << endl;
        cout << "3) Cancellare un prodotto. " << endl;
        cout << "4) Sommare il valore di tutti i prodotti preesenti nel magazzino." << endl;
        cout << "5) Sommare il valore dei prodotti della stessa tipologia presenti nel magazzino." << endl;
		cout << "6) Salva i prodotti nel file." << endl;
        cout << "7) Uscita." << AttributiStringOff << endl << endl;
        cin >> sceltaInt;

        switch (sceltaInt) {
        case 1:Clear(); inserimentoProdotto(); break;
        case 2:Clear(); listaProdotti(); break;
        case 3:Clear(); cancellaProdotto();  break;
        case 4:Clear(); sommaValoreMagazzino();  break;
        case 5:Clear(); sommaValoreMagazzinoProdotto();  break;
        case 6:Clear(); 
            gestoreFileArray.salvaProdottoSuFile(tipoP, nomeP, quantitaP, prezzoP, codiceP);
            cout << "Salvato!!";
            Clear();
            home(); break;
        case 7:break;
		
        default:
            cout << Bold << Giallo << "Hai sbagliato a inserire o non ho trovato quello che cerchi, riprova..." << AttributiStringOff << endl;
            Sleep4();
            Clear();
            home();
        }
    }

};


int main() {
	
    gestoreFileArray.inizializzaArray(tipoP, nomeP, quantitaP, prezzoP, codiceP);
    gestoreFileArray.listaProdottiNellArray();

    GestoreMagazzino gestore;
    gestore.home();

    return 0;
}