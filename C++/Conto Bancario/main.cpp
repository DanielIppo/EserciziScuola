/* Implementare un programma che rappresenti un conto corrente bancario. Il conto corrente conserva i seguenti:

1. Nome, cognome, data di nascita, saldo del conto, data di apertura del conto, codice fiscale dell'intestatario;
2. Nome della banca;

Il conto ha le seguenti funzionalità: 

1. Visualizza conto (in cui vengono visualizzate le caratteristiche sopra elencate);
2. Versa importo;
3. Prelievo importo;

Il programma è dotato di un menù che consente all'utente di scegliere una delle precedenti opzioni*/

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
using namespace std;

void Clear(){
    #if _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

string Login[2] = {"Daniel", "875645"};
string Dati[5] = {"Daniel", "Ippolito", "27/11/2005", "19/01/2022", "PPLDNL05S27B429W"};
double saldo = 1000000000.00, quantita;
string username, password, scelta;

class Conto{
    public:
    
    void Prelievo(){
        cout << CustomSeparatorWithText("#", "Rapisardi Bank Prelievo")<< "\n\nQuanto vorresti prelevare?\n"<<"\033[33mRicorda che puoi per un massimo di 2000\u20AC\033[0m";
        cin >> quantita;
        if (quantita <= 2000){
            saldo = saldo - quantita;
            cout << "\n\nPrelevato correttamente, ritorno alla Home...";
            sleep(5);
            Clear();
            Home(); 
        } else {
            cout << "\n\nHai digitato un numero troppogrande o hai sbagliato a digitare, riprova..";
            sleep(5);
            Clear();
            Home(); 
        }

    }
    
    void Versamento(){
        cout << CustomSeparatorWithText("#", "Rapisardi Bank Versamento")<<"\n\nQuanto vorresti versare?\n"<<"\033[33mRicorda che puoi per un massimo di 2000\u20AC\033[0m";
        
    }
    
    void Home(){
        cout << CustomSeparatorWithText("#", "Rapisardi Bank Home")<< "\n\n";
        cout << "Che operazione vorresti effettuare?\n\n"<< "1)Prelievo\n\n2)Versamento\n\n3)Info Conto\n\n";
        cin >> scelta; 
        if (scelta == "1"||scelta == "Prelievo"||scelta == "prelievo"){Clear();Prelievo();}
        else if (scelta == "2"||scelta == "Versamento"||scelta == "versamento"){Clear();Versamento();}
        else if (scelta == "3"||scelta == "Info"||scelta == "info"||scelta == "info conto"||scelta == "Info conto")cout << 12;
        else {
            cout << "Hai sbagliato a digitare, riprova!!";
            sleep(5);
            Clear();
            Home();
        }
    }
    
    void login(){
        cout << CustomSeparatorWithText("#", "Rapisardi Bank Login")<<"\n\n";
        cout << "Inserisci il tuo nome Username\n\n";
        cin >> username;
        cout << "\n\nOra inserisci la tua password\n\n";
        cin >> password;
        verifica_login(username, password);
    }
    
    void verifica_login(string username, string password){
        if (Login[0].length() == username.length() && Login[1].length() == password.length() && Login[0] == username && Login[1] == password){
            Clear();
            Home();
        } else {
            Clear();
            cout << CustomSeparatorWithText("#", "Rapisardi Bank Login")<<"\n\n";
            cout << "Hai sbagliato a digitare qualcosa, reinserisci i dati\n\n";
            sleep(5);
            Clear();
            login();
        }
    }
    
    
};
Conto conto;
int main(){
    conto.login();
}
