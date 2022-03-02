/*
Realizzare un programma che permetta di gestire il traffico aereo di un aeroporto. In particolare ci saranno 6 vettori per registrare:
codice del volo;
compagnia aerea;
partenza o arrivo (se è un aereo in arrivo o in partenza);
orario (di partenza o di arrivo);
stato (partito o arrivato);
Città;
Temuto conto che nel vettore partenza o arrivo dovrà contenere un codice in cui contenuto potrà essere P o A;
il vettore relativo allo stato potrà contenere i seguenti codici: D= Departured, L= landed, C= Canceled, B= Boarding, S= Scheduled.
Visualizzare:
le informazioni di un determinato volo dato in input;
codice volo, Città, orario, voli dove lo stato è B;
Visualizzare le informazioni dei voli in partenza per una città data in input
Dato in input (?) l'orario attuale/ acquisito l'orario di sistema visualizzare i voli il cui orario programmato è superato e non è ancora atterrato/partito e modicarlo in D.

*/

#ifdef _WIN32
#include <Windows.h>
#else 
#include <unistd.h>
#endif
#include <iostream>
#include <time.h>
using namespace std;

string Rosso = "\x1b[31m";
string Giallo = "\x1b[33m";
string Verde = "\x1b[32m";
string Blue = "\x1b[94m";
string Magenta = "\x1b[95m";
string ColoreDefault = "\x1b[0m";
string Bold = "\x1b[1m";
string AttributiStringOff = "\x1b[0m";

void Clear(){
    #if _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}


string codice[5] = {"AZ_297856","FR_654355","U2_998612","LH_897132","AF_683546"};
string compagniaAerea[5] = {"Alitalia","Ryanair","Easyjet","Lufthansa","Air France"};
char partenzaArrivo[5] = {'P','A','P','P','A'};
int ora [5] = {12, 15, 22, 10, 16};
int minuti [5] = {30, 20, 00, 50, 55};


//time_t theTime = time(NULL);



class Volo{
    public:
    
    string scelta;
    
    void home(){
        cout <<Rosso<<"####################################"<<endl;
        cout <<"########## Agenzia Viaggi ##########"<<endl;
        cout <<"####################################"<<ColoreDefault<<endl<<endl;
        
        cout << Bold <<"Che cosa vorresti fare?\n"<<Blue <<"1)Verificare lo stato di un volo.\n2)Vedere se si è in tempo.\n\n"<< ColoreDefault <<AttributiStringOff;
        cin >> scelta;
        if(scelta == "1" || scelta == "uno" || scelta == "Uno"){
            infoVoli();
        }
        else if(scelta == "2" || scelta == "due" || scelta == "Due"){
            //tempoAlVolo
        }
    }
    
    void infoVoli(){
        Clear();
        cout <<Rosso<<"####################################"<<endl;
        cout <<"########## Agenzia Viaggi ##########"<<endl;
        cout <<"####################################"<<ColoreDefault<<endl<<endl;
        cout <<Bold<<"Inserisci il tuo codice volo: "<<AttributiStringOff;
        cin >> scelta;
        
        for(int i = 0; i<5;i++){
            if(scelta == codice[i]){
                cout << "Codice volo: "<<Magenta<<codice[i]<<ColoreDefault<<"\nCompagniaAerea: "<<Verde<<compagniaAerea[i]<<ColoreDefault<<"\nStato: "<<Blue<<partenzaArrivo[i]<<ColoreDefault<<"\nOrario: "<<Giallo<<ora[i]<<":"<<minuti[i]<<ColoreDefault<<endl;
                sleep(5);
                Clear();
                home();
            } else {
                
            }
        }
    }
};



int main(){
Volo volo;
    volo.home();
}