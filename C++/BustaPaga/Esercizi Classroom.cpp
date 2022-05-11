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
		figlio disabile di età superiore a tre anni 350,00
		figlio disabile di età inferiore a tre anni. 620,00
7. Calcolo detrazione coniuge e carico
	Reddito Mensile Importo Della Detrazione
		Fino a 1.154 67
		Oltre 1.154 fino a 3.333 58
		Oltre 3.333 0
8. Calcolo dell’imposta netta (imposta lorda-detrazioni)
9. Calcolo dello stipendio netto da liquidare al lavoratore (Stipendio lordo-ritenute previdenziali-imposta netta)
Realizzare un programma che permetta di gestire attraverso le funzioni di calcolare la retribuzione mensile
di un dipendente*/
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <vector>
using namespace std;

//Ora creo varibili globali che mi serviranno durante il codice per colorare l'output del cout
const string Red = "\x1b[31m";
const string Green = "\x1b[32m";
const string Blue = "\x1b[94m";
const string Magenta = "\x1b[95m";
const string Bold = "\x1b[1m";
const string AttributeStringOff = "\x1b[0m";


void header() {
	cout <<Red<<Bold<< "::::::::::::::::::::::::::::::::::::" << endl;
	cout << ":::::::::Bardini & Roversi::::::::::" << endl;
	cout << "::::::::::::::::::::::::::::::::::::" << AttributeStringOff << endl << endl;
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

float calcolaStipendioLordo(int orelavorative, float pagabase){//Funzione che mi serve per calcolare il stipendio lordo
	float stipendiolordo = orelavorative * pagabase;
	return stipendiolordo;
}

float calcoloRitenutePrevidenziali(float stipendiolordo){//Funzione che mi serve per calcolare le ritenute previdenziali
	float ritenuteprevidenziali = (stipendiolordo * 23.81) / 100;
	return ritenuteprevidenziali;
}

float calcoloImponibileFiscale(float stipendiolordo, float ritenuteprevidenziali){//Funzione che mi serve per calcolare l'imponibile fiscale
	float imponibilefiscale = stipendiolordo - ritenuteprevidenziali;
	return imponibilefiscale;
}

float calcoloImpostaLorda(float imponibilefiscale){//Funzione che mi serve per calcolare l'imposta lorda
	float impostalorda = 0;
	impostalorda = (imponibilefiscale * 23) / 100;
	imponibilefiscale = imponibilefiscale - 1154;
	if (imponibilefiscale > 1154 && imponibilefiscale < 2154) {
		impostalorda += (imponibilefiscale * 25) / 100;
		imponibilefiscale -= 2154;
		if (imponibilefiscale > 0) {
			impostalorda += (imponibilefiscale * 35) / 100;
			return impostalorda;
		}
		else {
			return impostalorda;
		}
	}
	else {
		return impostalorda;
	}
}

float calcoloDetrazioniPerLavoroDipendente(float imponibilefiscale, float reddito){//Funzione che mi serve per calcolare le detrazioni per lavoro dipendente
	float detrazione = 0;
	detrazione = 144;
	imponibilefiscale = imponibilefiscale - 1154;
	if (imponibilefiscale > 1154 && imponibilefiscale < 2154) {
		detrazione += 146 + 92 * (2154 - reddito) / 1000;
		return detrazione;
	}
	else {
		return detrazione;
	}
}

float calcoloDetrazioniFamiliariACarico(int figli) {//Funzione che mi serve per calcolare le detrazioni familiari a carico
	float detrazioni = 0;
	int tmp;
	if (figli > 0) {
		for (int i = 0; i < figli; i++) {
			cout <<Blue<<Bold<< "Il suo figlio " << i + 1 << " rientra in una di queste categorie?\n";
			cout <<Magenta<< "1. Minore di 3 anni" << endl;
			cout << "2. Disabile con più di 3 anni" << endl;
			cout << "3. Disabile con meno di 3 anni" << endl;
			cout << "4. Nessuna" <<AttributeStringOff<< endl;
			cin >> tmp;
			switch (tmp) {
			case 1: detrazioni += 220; break;
			case 2: detrazioni += 350; break;
			case 3: detrazioni += 620; break;
			case 4: detrazioni += 0; break;
			default: detrazioni += 0; break;
			}
			cout << "\33[2K\033[A\33[2K\r\33[2K\033[A\33[2K\r\33[2K\033[A\33[2K\r\33[2K\033[A\33[2K\r\33[2K\033[A\33[2K\r\33[2K\033[A\33[2K\r";
		}
	}
	return detrazioni;
}

float calcoloDetrazioniConiugeCarico(float imponibileFiscale) {//Funzione che mi serve per calcolare le detrazioni coniuge a carico
	float detrazioni = 0;
	detrazioni += 67;
	imponibileFiscale -= 1154;
	if (imponibileFiscale > 1154 && imponibileFiscale < 3333) {
		detrazioni += 58;
		return detrazioni;
	} else {
		return detrazioni;
	}
}

float calcoloImpostaNetta(float impostaLorda, float detrazioni) {//Funzione che mi serve per calcolare l'imposta netta
	float impostaNetta = impostaLorda - detrazioni;
	return impostaNetta;
}

float calcoloStipendioNetto(float stipendioLordo, float ritenutePrevidenziali, float impostaNetta) {//Funzione che mi serve per calcolare il stipendio netto
	float stipendioNetto = stipendioLordo - ritenutePrevidenziali - impostaNetta;
	return stipendioNetto;
}


int main() {
	header();
	int oreLavorative, nFigli;
	float pagaBase, reddito, detrazioniTot; //Creo le variabili che mi serviranno per calcolare le retribuzioni
	cout <<Blue<<Bold<< "Inserisci il numero di ore lavorate: "<<Green;
	cin >> oreLavorative;
	oreLavorative = checkInput(oreLavorative, "Ore lavorate: ");
	cout <<Blue<< "Inserisci la paga base oraria: "<<Green;
	cin >> pagaBase;
	pagaBase = checkInputFloat(pagaBase, "Paga base oraria: ");
	cout <<Blue<< "Inserisci il tuo reddito: "<<Green;
	cin >> reddito;
	reddito = checkInputFloat(reddito, "Reddito: ");
	cout <<Blue<< "Inserisci il numero di figli: "<<Green;
	cin >> nFigli;
	cout << AttributeStringOff;
	nFigli = checkInput(nFigli, "Numero di figli: ");

	float stipendioLordo = calcolaStipendioLordo(oreLavorative, pagaBase);
	float ritenutePrevidenziale = calcoloRitenutePrevidenziali(stipendioLordo);
	float imponibileFiscale = calcoloImponibileFiscale(stipendioLordo, ritenutePrevidenziale);
	float impostaLorda = calcoloImpostaLorda(imponibileFiscale);
	float detrazioniLavoroDipendente = calcoloDetrazioniPerLavoroDipendente(imponibileFiscale, reddito);
	float detrazioniFamiliariaCarico = calcoloDetrazioniFamiliariACarico(nFigli);
	float detrazioniConiugeeCarico = calcoloDetrazioniConiugeCarico(imponibileFiscale);
	detrazioniTot = detrazioniLavoroDipendente + detrazioniFamiliariaCarico + detrazioniConiugeeCarico;
	float impostaNetta = calcoloImpostaNetta(impostaLorda, detrazioniTot);
	
	float stipendioNetto = calcoloStipendioNetto(stipendioLordo, ritenutePrevidenziale, impostaNetta);
	cout <<Red<<Bold<<endl<< "Il tuo stipendio netto è: " << stipendioNetto << endl<<AttributeStringOff;
}
