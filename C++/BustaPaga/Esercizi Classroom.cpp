/*Lo studio commerciale “Bardini & Roversi” vi chiede di realizzare un programma che permetta di elaborare la busta paga dei dipendenti tenuto conto che le fasi sono le seguenti:

1. Definizione dello stipendio lordo (n° ore lavorate * paga base oraria)

2. Calcolo delle ritenute previdenziali (stipendio lordo * 23,81%)

3. Calcolo dell’imponibile fiscale (stipendio lordo – ritenuta previdenziale)

4. Calcolo dell’imposta lorda sull’imponibile fiscale.
		Reddito Mensile Aliquota
		Irpef
		Fino a 1.154 23%
		Oltre 1.154 fino a 2.154 25%
		Oltre 2.154 35%

5. Calcolo delle seguenti detrazioni per lavoro dipendente:
		Reddito Mensile Importo Della Detrazione
		Fino a 1.154 144
		Oltre 1.154 fino a 2.154 146+92*(2.154-reddito)/1.000 
		Oltre 2.154 0

6. Calcolo detrazioni per familiari a carico
Tipo Importo Della Detrazione:
		figlio di età inferiore ai tre anni; 220,00
		figlio disabile di età superiore a tre anni 350,00
		figlio disabile di età inferiore a tre anni. 620,00

7. Calcolo detrazione coniuge e carico
		Reddito Mensile Importo Della Detrazione
		Fino a 1.154 67
		Oltre 1.154 fino a 3.333 58
		Oltre 3.333 0

8. Calcolo dell’imposta netta (imposta lorda-detrazioni)

9. Calcolo dello stipendio netto da liquidare al lavoratore (Stipendio lordo-ritenute previdenziali-imposta netta)


Realizzare un programma che permetta di gestire attraverso le funzioni di calcolare la retribuzione mensile
di un dipendente*/
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
using namespace std;

//Ora creo varibili globali che mi serviranno durante il codice per colorare l'output del cout
string Red = "\x1b[31m";
string Yellow = "\x1b[33m";
string Green = "\x1b[32m";
string Blue = "\x1b[94m";
string Magenta = "\x1b[95m";
string ColorDefault = "\x1b[0m";
string Bold = "\x1b[1m";
string AttributeStringOff = "\x1b[0m";


void header() {
	cout << "::::::::::::::::::::::::::::::::::::" << endl;
	cout << ":::::::::Bardini & Roversi::::::::::" << endl;
	cout << "::::::::::::::::::::::::::::::::::::" << endl << endl;
}	

void clear() { //Creo una funzione che serve per pulire lo schermo per tutti i sistemi operativi
#if _WIN32
	system("cls");
#else
	system("clear");
#endif
}

void sleep3() {//Funzione che mette in pausa il programma per 3 secondi sia su linux che su windows
#ifdef _WIN32
	Sleep(3000);
#else
	sleep(3);
#endif
}

int checkInput(int check, string variable) {//Funzione che mi serve per controllare che l'input inserito sia un numero presa dal mio github
	while (cin.fail()) {
		cin.clear();
		cout << Red << "Il numero inserito è errato o non è un numero. Perfavore reinseriscilo. " << AttributeStringOff;
		cin.ignore(1000, '\n');
		sleep3();
		cout << "\33[2K\033[A\33[2K\r" << variable << Green << Bold;
		cin >> check;
		cout << AttributeStringOff;
	}
	return check;
}
int checkInputFloat(float check, string variable) {//Funzione che mi serve per controllare che l'input inserito sia un numero presa dal mio github
	while (cin.fail()) {
		cin.clear();
		cout << Red << "Il numero inserito è errato o non è un numero. Perfavore reinseriscilo. " << AttributeStringOff;
		cin.ignore(1000, '\n');
		sleep3();
		cout << "\33[2K\033[A\33[2K\r" << variable << Green << Bold;
		cin >> check;
		cout << AttributeStringOff;
	}
	return check;
}

float calcolaStipendioLordo(int orelavorative, float pagabase) {//Funzione che mi serve per calcolare il stipendio lordo
	float stipendiolordo = orelavorative * pagabase;
	return stipendiolordo;
}

float calcoloRitenutePrevidenziali(float stipendiolordo) {
	float ritenuteprevidenziali = (stipendiolordo * 23.81) / 100;
	return ritenuteprevidenziali;
}

float calcoloImponibileFiscale(float stipendiolordo, float ritenuteprevidenziali) {
	float imponibilefiscale = stipendiolordo - ritenuteprevidenziali;
	return imponibilefiscale;
}

float calcoloImpostaLorda(float imponibilefiscale) {
	float impostalorda = 0;
	impostalorda = (imponibilefiscale * 23) / 100;
	imponibilefiscale = imponibilefiscale - 1154;
	if (imponibilefiscale > 1154 && imponibilefiscale < 2154) {
		impostalorda += (imponibilefiscale * 25) / 100;
		
	}
}

int main() {
	header();
	int oreLavorative, nFigli;
	float pagaBase, stipendioLordo, ritenutePrevidenziale, imponibileFiscale, impostaLorda; //Creo le variabili che mi serviranno per calcolare le retribuzioni
	cout<< "Inserisci il numero di ore lavorate: ";
	cin >> oreLavorative;
	oreLavorative = checkInput(oreLavorative, "Ore lavorate: ");
	cout << "Inserisci la paga base oraria: ";
	cin >> pagaBase;
	pagaBase = checkInputFloat(pagaBase, "Paga base oraria: ");
	cout << "Inserisci il numero di figli: ";
	cin >> nFigli;
	nFigli = checkInput(nFigli, "Numero di figli: ");
		 
	stipendioLordo = calcolaStipendioLordo(oreLavorative, pagaBase);
	ritenutePrevidenziale = calcoloRitenutePrevidenziali(stipendioLordo);
	imponibileFiscale = calcoloImponibileFiscale(stipendioLordo, ritenutePrevidenziale);
	impostaLorda = calcoloImpostaLorda(imponibileFiscale);


}