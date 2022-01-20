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
string Dati1[5] = {"Nome: ", "Cognome: ", "Data di nascita: ", "Data apertura conto: ", "Codice fiscale: "};
double saldo = 1000000.00, quantita;
string username, password;
int scelta;

class Conto{
    public:
    
    void Prelievo(){
        cout <<"#############################################"<<endl;
        cout <<"########## Rapisardi Bank Prelievo ##########"<<endl;
        cout <<"#############################################"<<endl;
        cout << "\nQuanto vorresti prelevare?\n";
        cout <<"\033[33mRicorda che puoi per un massimo di 2000\u20AC\033[0m\n\n";
        cin>>quantita;
        verifica_input(quantita);
        if (quantita <= 2000){
            cout << "\n\nPrelevato correttamente, ritorno alla Home...";
            cout.flush();
            saldo = saldo - quantita;
            sleep(3);
            Clear();
            Home();
        } else {
            cout << "\n\nHai digitato un numero troppogrande o hai sbagliato a digitare, riprova..";
            cout.flush();
            sleep(3);
            Clear();
            Prelievo();
        }

    }
    
    void Versamento(){
        cout <<"###############################################"<<endl;
        cout <<"########## Rapisardi Bank Versamento ##########"<<endl;
        cout <<"###############################################"<<endl;
        cout <<"\nQuanto vorresti versare?\n";
        cout <<"\033[33mRicorda che puoi per un massimo di 2000\u20AC\033[0m\n\n";
        cin >> quantita;
        verifica_input(quantita);
        if (quantita <= 2000){
            saldo = saldo - quantita;
            cout << "\n\nPrelevato correttamente, ritorno alla Home...";
            cout.flush();
            sleep(3);
            Clear();
            Home(); 
        } else {
            cout << "\n\nHai digitato un numero troppogrande o hai sbagliato a digitare, riprova..";
            cout.flush();
            sleep(3);
            Clear();
            Versamento(); 
        }
    }
    
    void Info(){
        cout <<"#########################################"<<endl;
        cout <<"########## Rapisardi Bank Info ##########"<<endl;
        cout <<"#########################################"<<endl;
        for(int i = 0; i<5;i++){
            cout <<Dati1[i]<<Dati[i]<<endl;
        }
        cout <<"Saldo: "<< saldo << "\u20AC";
        cout.flush();
        sleep(1);
        cout <<"\n\nRitorno alla home...";
        cout.flush();
        sleep(2);
        Clear();
        Home();
    }
    
    void Home(){
        cout <<"#########################################"<<endl;
        cout <<"########## Rapisardi Bank Home ##########"<<endl;
        cout <<"#########################################"<<endl<<endl;
        cout << "Che operazione vorresti effettuare?\n\n"<< "1)Prelievo\n\n2)Versamento\n\n3)Info Conto\n\n";
        cin >> scelta; 
        switch (scelta){
            case 1:Clear();
                   Prelievo();
            case 2:Clear();
                   Versamento();
            case 3:Clear();
                   Info();
            default:cout << "Hai sbagliato a digitare, riprova...";
            cout.flush();
            sleep(3);
            Clear();
            Home();
        }
    }
    
    void login(){
        cout <<"##########################################"<<endl;
        cout <<"########## Rapisardi Bank Login ##########"<<endl;
        cout <<"##########################################"<<endl<<endl;
        cout << "Inserisci il tuo nome Username\n\n";
        cin >> username;
        cout << "\nOra inserisci la tua password\n\n";
        cin >> password;
        verifica_login(username, password);
    }
    
    void verifica_login(string username, string password){
        if (Login[0].length() == username.length() && Login[1].length() == password.length() && Login[0] == username && Login[1] == password){
            Clear();
            Home();
        } else {
            Clear();
            cout <<"##########################################"<<endl;
            cout <<"########## Rapisardi Bank Login ##########"<<endl;
            cout <<"##########################################"<<endl<<endl;
            cout << "Hai sbagliato a digitare qualcosa, reinserisci i dati";
            cout.flush();
            sleep(5);
            Clear();
            login();
        }
    }
    
    int verifica_input(int riprova){
        while(cin.fail()){
            cin.clear();
            cout << "\nHai sbagliato a digitare il numero, riprova...\n";
            cin.ignore(1000, '\n');
            cin >> riprova;
        }
        return riprova;
    }
    
    
};
Conto conto;
int main(){
    conto.login();
}
