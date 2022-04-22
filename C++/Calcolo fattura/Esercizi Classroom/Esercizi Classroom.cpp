/*Realizzare un programma che permetta di calcolare il totale
di una fattura tenuto conto che:

1. L’operatore dovrà inserire: //Fatto
    a. La quantità della merce acquistata;
    b. Il prezzo unitario;
    c. L’aliquota IVA
    d. La modalità di pagamento
    
2. Il programma dovrà prevedere le seguenti funzioni:
    a. Calcolo dell’imponibile (quantità*prezzo unitario) //Fatto
    b. Calcolo dell’IVA (imponibile*aliquota iva/100)//Fatto
    c. Calcolo del totale lordo (imponibile + IVA)//Fatto
    d. Calcolo dello sconto tenuto conto che:
        i. Se il pagamento è in contanti si avrà diritto ad uno sconto del 10%;
        ii. Se il pagamento è a 30gg l’importo totale dovrà essere aumentato degli interessi al 5% sul totale;
        iii. Se il pagamento è superiore a 30gg gli interessi saranno calcolati al 7%
        
3. Visualizzare:
    a. L’imponibile
    b. L’iva
    c. Il totale lordo
    d. Lo sconto
    e. Il totale netto (totale lordo-sconto+interessi)*/

#ifdef _WIN32			//Dalla linea di codice 53 alla 57 importo le librerie in base al sistema operativo in cui si lavora
#include <Windows.h>
#else 
#include <unistd.h>
#endif
#include <iostream>
using namespace std;

//Ora creo varibili globali che mi serviranno durante il codice per colorare l'output del cout
string Rosso = "\x1b[31m";		
string Giallo = "\x1b[33m";
string Verde = "\x1b[32m";
string Blue = "\x1b[94m";
string Magenta = "\x1b[95m";
string ColoreDefault = "\x1b[0m";
string Bold = "\x1b[1m";
string AttributiStringOff = "\x1b[0m";

void clear() { //Creo una funzione che serve per pulire lo schermo per tutti i sistemi operativi
#if _WIN32
	system("cls");
#else
	system("clear");
#endif
}

void header(){ //Creo una funzione per non riscrivere ogni volta la parte alta
	cout <<Rosso<<Bold<< "++++++++++++++++++++++++++" << endl;
	cout << "+++++ Calcolo Fattura ++++" << endl;
	cout << "++++++++++++++++++++++++++" <<AttributiStringOff<< endl << endl;
}

//Creo una funzione che calola l'IVA
float calcoloIVA(float prezzo, float aliquota){
	return (prezzo*aliquota)/100;
}

//Creo una funzione che calcola l'imponibile
float calcoloImponibile(float prezzo, float quantita){
	return prezzo*quantita;
}

//Creo una funione che calcola il totale lordo
float calcoloTotaleLordo(float imponibile, float iva){
	return imponibile+iva;
}

//Creo una funzione che calcola lo sconto in base al pagamento
float calcoloSconto(float totaleLordo, string pagamento){
	float sconto = 0;
	if(pagamento == "contanti"){
		sconto = totaleLordo*0.1;
	}
	else if(pagamento == "30gg"){
		sconto = totaleLordo*0.05;
	}
	else if(pagamento == "30gg+"){
		sconto = totaleLordo*0.07;
	}
	return sconto;
}

//Creo una funzione che calcola il totale netto
float calcoloTotaleNetto(float totaleLordo, float sconto){
	return totaleLordo-sconto;
}

//Creo una funzione che mi permette di stampare a video i risultati
void stampaRisultati(float imponibile, float iva, float totaleLordo, float sconto, float totaleNetto){
	cout << Blue << Bold << "Imponibile: " << imponibile << endl;
	cout << "IVA: " << iva << endl;
	cout << "Totale lordo: " << totaleLordo << endl;
	cout << "Sconto: " << sconto << endl;
	cout << "Totale netto: " << totaleNetto << endl << AttributiStringOff;
}

void menu() { //Creo una funzione per far inserire all'utente i valori per calcolare tutto
	header();
	int quantita, prezzoProdotti, aliquota;
	string metodoPagamento;
	cout << "Inserisci la quantità: "<<Verde;
	cin >> quantita;
	cout <<AttributiStringOff<< "Inserisci il prezzo: "<<Verde;
	cin >> prezzoProdotti;
	cout <<AttributiStringOff<< "Inserisci l'Aliquota: "<<Verde;
	cin >> aliquota;
	cout <<AttributiStringOff<< "Inserisci il metodo di pagamento: "<<Verde;
	cin >> metodoPagamento;
	cout <<AttributiStringOff<< endl;

	int iva,imponibile, totaleLordo, sconto, totaleNetto;
	
	iva = calcoloIVA(prezzoProdotti, aliquota);
	imponibile = calcoloImponibile(prezzoProdotti, quantita);
	totaleLordo = calcoloTotaleLordo(imponibile, iva);
	sconto = calcoloSconto(totaleLordo, metodoPagamento);
	totaleNetto = calcoloTotaleNetto(totaleLordo, sconto);
	
	stampaRisultati(imponibile, iva, totaleLordo, sconto, totaleNetto);
	
	Sleep(5);
	clear();
	menu();
}



int main() {
	menu();
	
	
	return 0;
}